//3. 无重复字符的最长子串
class Solution {
public:
    bool isCharInString(string str,char c){
        for(int i=0;i<str.size();i++){
            if(str[i] == c){
                return true;
            }
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        int len = 0;string ret;
        for(int i=0;i<s.size();i++){
            ret = s[i];
            for(int j=i + 1;j<s.size();j++){
                if(!isCharInString(ret,s[j])){
                    ret += s[j];
                }
                else{
                    break;
                }
            }
            if(ret.size() > len){
                len = ret.size();
            }
        }
        return len;
    }
};

//4. 寻找两个正序数组的中位数
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int len = len1 + len2;
        int* arr = new int[len];
        int pos1 = 0;
        int pos2 = 0;
        for(int i=0;i<len;i++){
            if(pos1 != len1 && pos2 != len2){
                if(nums1[pos1] > nums2[pos2]){
                    arr[i] = nums2[pos2++];
                }
                else{
                    arr[i] = nums1[pos1++];
                }
            }
            else if(pos1 == len1){
                arr[i] = nums2[pos2++];
            }
            else if(pos2 == len2){
                arr[i] = nums1[pos1++];
            }
        }

        if(len % 2 == 0){
            return (arr[len / 2] + arr[len / 2 -1])/2.0;
        }
        else{
            return (double)arr[len/2];
        }
    }
};
