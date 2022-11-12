//88. 合并两个有序数组
/*
    给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
    最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
    请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 如果后面的数组为空，就直接返回，直接就是第一个容器
        if(n==0) return;
        // 如果第容器为空，将第二个容器中所有的数据拷贝到第一个容器当中，然后直接返回就可以
        if(m==0){
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
            return;
        }
        // 两个容器都不为空，定义两个变量，分别存储第一个容器和第二个容器相互比较的位置
        int left=m-1;
        int right =n-1;
        int flag = m+n-1;
        while(right>=0){
            if(left < 0||nums2[right] > nums1[left]){
                nums1[flag--]=nums2[right--];
            }
            else{
                nums1[flag--]=nums1[left--];
            }
        }
    }
};

//169. 多数元素
/*
    给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。

你可以假设数组是非空的，并且给定的数组总是存在多数元素。
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //  //建立哈希数组找其中出现次数大于n/2的数
        // unordered_map<int,int> hash;
        // for(int i=0;i<nums.size();i++){
        //     hash[nums[i]]++;
        //     if(hash[nums[i]]>nums.size()/2){
        //         return nums[i];
        //     }
        // }
        // return NULL;

        // 法2
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};


//217. 存在重复元素
/*
    给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // 创建一个哈希表，依次将数字放入对应的地址当中，如果当中已经有值了，也就是对应的哈希表当中，数字等于1，说明之前有重复的元素，就可以直接返回
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
            if(hash[nums[i]]==2){
                return true;
            }
        }
        // 如果没有找到，哈希表里面的值都不超过2，就没有重复的值，返回假
        return false;
    }
};

//242. 有效的字母异位词
/*
    给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词
    注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        // 长度不相等就可以直接返回了
        if(s.length() != t.length()){
            return false;
        }
        // 创建两个哈希表，分别存储对应字符出现的个数
        unordered_map<char,int> hash1;
        unordered_map<char,int> hash2;
        for(int i=0;i<s.length();i++){
            hash1[s[i]]++;
            hash2[t[i]]++;
        }
        // 然后进行判断，如果对用哈希表的值不相等就不是有效的字母异位词
        for(int i=0;i<s.length();i++){
            if(hash1[s[i]] != hash2[s[i]]){
                return false;
            }
        }
        return true;
    }
};


// 268. 丢失的数字
// 给定一个包含 [0, n] 中 n 个数的数组 nums ，找出 [0, n] 这个范围内没有出现在数组中的那个数。

class Solution {
public:
    // 先将数组进行排序，如果对应的数值不等于下标值就丢失了数字
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i != nums[i]){
                return i;
            }
        }
        return nums.size();
    }
};
