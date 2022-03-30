#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main() {

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int c = 0;
        int num = i;
        while (num) {
            c += pow(num % 10, 4);
            num /= 10;
        }
        if (c == i)
        {
            cout << i << " ";
        }
    }

    system("pause");
    return 0;
}

//void selectionSort(int arr[], int len)
//{
//	//首先找到数组最左边和最右边的元素下标
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		//假设最大值和最小值的元素下标
//		int min = left;
//		int max = right;
//		//通过循环找到最大值和最小值元素下标
//		for (int j = left; j <= right; j++) {
//			if (arr[j] < arr[min])
//				min = j;
//			if (arr[j] > arr[max])
//				max = j;
//		}
//		//如果找到的最小值元素下标不等于最开始最左边的下标，就将这两个值进行交换
//		//如果相等，则说明该位置已经排序完成
//		if (left != min) {
//			int temp = arr[left];
//			arr[left] = arr[min];
//			arr[min] = temp;
//		}
//		//如果最小值的下标是元素的最后一个并且最大值的下标是数组元素的第一个
//		//通过上面的交换，最小值已经在数组最左边，最大值已经在数组的最右边
//		//倘若直接进行交换，则就会将上面交换过的交换回去
//		//所以直接将最右边的元素下标赋值给最大值的下标
//		if (min == right && max == left)
//			max = right;
//		//与上面同理
//		if (right != max) {
//			int temp = arr[right];
//			arr[right] = arr[max];
//			arr[max] = temp;
//		}
//		//数组两边的元素已经排序完成，数组的长度就要减去2
//		left++;
//		right--;
//	}
//}
//
////void selectionSort(int arr[],int len)
////{
////	//代表排序要进行的躺数 数组长度-1次
////	for (int i = 0; i < len - 1; i++){
////		int min = i;//先假设数组中的最大值或者最小值的下标是i  这里举例升序排列
////		for (int j = i + 1; j < len; j++)//每次要从假设的最小值下面的后面开始比较
////		{
////			if (arr[j] < arr[min])
////				min = j;//如果后面的元素小于假设的最小值，就更新min值得下标
////		}
////		if (i != min) {//如果找到的最小值下标不等于需要进行排序的下标，则交换两个下标的值
////			int temp = arr[i];
////			arr[i] = arr[min];
////			arr[min] = temp;
////		}
////		//如果min和i相等，则说明此位置已经满足排序要求
////	}
////}
//
//int main() {
//
//	int arr[10] = { 9,2,3,4,5,6,7,8,1,0};//一个包含十个元素的数组
//
//	selectionSort(arr,10);//将数组和数组的长度传过去
//
//	for (int i = 0; i < 10; i++)//打印排序后的结果
//		cout << arr[i] << " ";
//
//	system("pause");
//	return 0;
//}