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
//	//�����ҵ���������ߺ����ұߵ�Ԫ���±�
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		//�������ֵ����Сֵ��Ԫ���±�
//		int min = left;
//		int max = right;
//		//ͨ��ѭ���ҵ����ֵ����СֵԪ���±�
//		for (int j = left; j <= right; j++) {
//			if (arr[j] < arr[min])
//				min = j;
//			if (arr[j] > arr[max])
//				max = j;
//		}
//		//����ҵ�����СֵԪ���±겻�����ʼ����ߵ��±꣬�ͽ�������ֵ���н���
//		//�����ȣ���˵����λ���Ѿ��������
//		if (left != min) {
//			int temp = arr[left];
//			arr[left] = arr[min];
//			arr[min] = temp;
//		}
//		//�����Сֵ���±���Ԫ�ص����һ���������ֵ���±�������Ԫ�صĵ�һ��
//		//ͨ������Ľ�������Сֵ�Ѿ�����������ߣ����ֵ�Ѿ�����������ұ�
//		//����ֱ�ӽ��н�������ͻὫ���潻�����Ľ�����ȥ
//		//����ֱ�ӽ����ұߵ�Ԫ���±긳ֵ�����ֵ���±�
//		if (min == right && max == left)
//			max = right;
//		//������ͬ��
//		if (right != max) {
//			int temp = arr[right];
//			arr[right] = arr[max];
//			arr[max] = temp;
//		}
//		//�������ߵ�Ԫ���Ѿ�������ɣ�����ĳ��Ⱦ�Ҫ��ȥ2
//		left++;
//		right--;
//	}
//}
//
////void selectionSort(int arr[],int len)
////{
////	//��������Ҫ���е����� ���鳤��-1��
////	for (int i = 0; i < len - 1; i++){
////		int min = i;//�ȼ��������е����ֵ������Сֵ���±���i  ���������������
////		for (int j = i + 1; j < len; j++)//ÿ��Ҫ�Ӽ������Сֵ����ĺ��濪ʼ�Ƚ�
////		{
////			if (arr[j] < arr[min])
////				min = j;//��������Ԫ��С�ڼ������Сֵ���͸���minֵ���±�
////		}
////		if (i != min) {//����ҵ�����Сֵ�±겻������Ҫ����������±꣬�򽻻������±��ֵ
////			int temp = arr[i];
////			arr[i] = arr[min];
////			arr[min] = temp;
////		}
////		//���min��i��ȣ���˵����λ���Ѿ���������Ҫ��
////	}
////}
//
//int main() {
//
//	int arr[10] = { 9,2,3,4,5,6,7,8,1,0};//һ������ʮ��Ԫ�ص�����
//
//	selectionSort(arr,10);//�����������ĳ��ȴ���ȥ
//
//	for (int i = 0; i < 10; i++)//��ӡ�����Ľ��
//		cout << arr[i] << " ";
//
//	system("pause");
//	return 0;
//}