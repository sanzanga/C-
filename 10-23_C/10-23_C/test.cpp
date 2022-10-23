//#include<iostream>
//using namespace std;
//
//#define m 16 
//#define NULLKEY 0 //单元为空的标记
//
//struct HashTable {
//    int  key;
//};
//
//void CreateHash(HashTable HT[], int n);
//int SearchHash(HashTable HT[], int key);
//
//int main()
//{
//    int value, key;
//    int result;
//    int i, j, n;
//    HashTable HT[m];
//    for (i = 0; i < m; i++)
//        HT[i].key = 0;
//    cin >> n;
//    if (n > m) return 0;
//    CreateHash(HT, n);
//    cin >> key;
//    result = SearchHash(HT, key);
//    if (result != -1)
//        cout << "search success，The key is located in " << result + 1;
//    else
//        cout << "search failed";
//    return 0;
//}
//
//
///* 请在这里填写答案 */
//int zhiShu(int num) {
//    bool flag = true;
//    for (int i = num; i >= 1; i--) {
//        flag = true;
//        for (int j = 2; j < i; j++) {
//            if (i % j == 0) {
//                flag = false;
//                break;
//            }
//        }
//        if (flag) {
//            return i;
//        }
//    }
//    
//}
//
//void CreateHash(HashTable HT[], int n)
//{
//    int a[m];
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int le = zhiShu(m);
//    for (int i = 0; i < n; i++) {
//        int temp = a[i] % le;
//        HashTable p = HT[temp];
//        int flag = 1;
//        while (p.key != 0) {
//            p = HT[temp + flag];
//            flag++;
//        }
//        HT[temp + flag - 1].key = a[i];
//    }
//}//输入不大于m的n个不为0（0表示空值）的数，用线性探查法解决冲突构造散列表
//
//int SearchHash(HashTable HT[], int key)
//{
//    int h0 = HT[key%m].key;
//    if (h0 == 0) return -1;
//    else if (h0 == key) return h0;
//    else {
//        for (int i = 1; i < m; i++) {
//            int flag = HT[(key + i) % m].key;
//            if (flag == key) return (key+i)%m;
//        }
//        return -1;
//    }
//}//输入一个值key，在散列表中查找key位置


//void CreateHash(HashTable HT[], int n)
//{
//    int a[P], i;
//    for (i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (i = 0; i < P; i++)//哼，不给我头指针我手动补
//    {
//        HT[i] = (HashTable)malloc(sizeof(HashTable));
//        HT[i]->next = NULL;
//    }
//    for (i = 0; i < n; i++)
//    {
//        int temp = a[i] % P;
//        HashTable p = HT[temp];
//        while (p->next != NULL)
//        {
//            p = p->next;
//        }
//        HashTable q = (HashTable)malloc(sizeof(HashTable));
//        q->key = a[i];
//        p->next = q;
//        q->next = NULL;
//    }
//
//}
//
//
//
//float ASL(HashTable HT[])
//{
//    double cnt, sum, a;
//    for (int i = 0; i < P; i++)
//    {
//        if (HT[i]->next != NULL)
//        {
//
//            HashTable p = HT[i];
//            a = 1;
//            while (p->next != NULL)
//            {
//                sum += a;//找这个结点的步数
//                cnt++;//一共找了多少结点了
//                a++;
//                p = p->next;
//
//            }
//        }
//    }
//    return sum / cnt;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct Node {
//	string s;
//	int count;
//};
//
//int main() {
//
//	char c;
//	string s;
//	
//	Node arrnode[10000];
//	int size = 0;
//
//	while (scanf("%c", &c)) {
//		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'||c=='_'||c>='0'&&c<='9') {
//			if (c >= 'A' && c <= 'Z') {
//				c = c + 32;
//			}
//			s += c;
//		}
//		else if (c == '#' || s.size() > 0) {
//			string str;
//			
//			if (s.size() > 0) {
//				for (int i = 0; i < s.size() && i < 15; i++) {
//					str += s[i];//
//				}
//				bool flag = true;
//				for (int i = 0; i < size; i++) {
//					if (arrnode[i].s == str) {
//						arrnode[i].count++;
//						flag = false;
//						break;
//					}
//				}
//				if (flag) {
//					arrnode[size].s = str;
//					arrnode[size].count = 1;
//					size++;
//				}
//			}
//			s.clear();
//			if (c == '#') {
//				break;
//			}
//		}
//	}
//
//	cout << size << endl;
//	for (int i = 0; i < size - 1; i++) {
//		for (int j = 0; j < size - 1 - i; j++) {
//			if (arrnode[j].count < arrnode[j + 1].count) {
//				Node temp = arrnode[j];
//				arrnode[j] = arrnode[j + 1];
//				arrnode[j + 1] = temp;
//			}
//			else if (arrnode[j].count == arrnode[j + 1].count) {
//				if (arrnode[j].s > arrnode[j + 1].s) {
//					string temp = arrnode[j].s;
//					arrnode[j].s = arrnode[j + 1].s;
//					arrnode[j + 1].s = temp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i <= size / 10; i++) {
//		cout << arrnode[i].count << ":" << arrnode[i].s << endl;
//	}
//
//	return 0;
//}

#define _crt_secure_no_warnings 1
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <algorithm>
//
//
//using namespace std;
//
//int main() {
//
//    int n, m, num, size, position;
//    int arr1[50000];
//    int arr2[50000];
//    int arr[10000];
//    int ret[10000];
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr1[i];
//        cin >> arr2[i];
//    }
//    cin >> m; size = 0;
//    for (int i = 0; i < m; i++) {
//        cin >> num;
//        arr[i] = num;
//    }
//
//    for (int i = 0; i < m; i++) {
//        bool flag = true;
//        for (int j = 0; j < n; j++) {
//            if (arr[i] == arr1[j] || arr[i] == arr2[j]) {
//                flag = false;
//                position = j;
//                break;
//            }
//        }
//        if (flag) {
//            ret[size] = arr[i];
//            size++;
//        }
//        else {
//            if (arr1[position] == arr[i]) {
//                bool flag1 = true;
//                for (int j = 0; j < m; j++) {
//                    if (arr2[position] == arr[j]) {
//                        flag1 = false;
//                        break;
//                    }
//                }
//                if (flag1) {
//                    ret[size] = arr[i];
//                    size++;
//                }
//            }
//            else if (arr2[position] == arr[i]) {
//                bool flag1 = true;
//                for (int j = 0; j < m; j++) {
//                    if (arr1[position] == arr[j]) {
//                        flag1 = false;
//                        break;
//                    }
//                }
//                if (flag1) {
//                    ret[size] = arr[i];
//                    size++;
//                }
//            }
//        }
//    
//    }
//
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - 1 - i; j++) {
//            if (ret[j] > ret[j + 1]) {
//                int temp = ret[j];
//                ret[j] = ret[j + 1];
//                ret[j + 1] = temp;
//            }
//        }
//    }
//    cout << size << endl;
//    for (int i = 0; i < size - 1; i++)
//        cout << ret[i] << " ";
//    cout << ret[size - 1] << endl;
//
//    return 0;
//}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int arr1[100000];
int arr2[100000];
int arr3[100000];

int main() {


	set<int>s;
	int n, m;
	cin >> n;
	for (int i = 0; i < 100000; i++) {
		arr1[i] = -1;
	}
	for (int i = 0; i < n; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		arr1[num1] = num2;
		arr1[num2] = num1;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
		if (arr1[arr2[i]] != -1) {//arr2[i]不是单身狗
			arr3[arr1[arr2[i]]] = 1;//进行标记
		}
	}
	for (int i = 0; i < m; i++) {
		if (arr3[arr2[i]] != 1) {//如果等于1说明两个人都来了聚会
			s.insert(arr2[i]);
		}
	}

	cout << s.size() << endl;
    if (s.size() == 0) return 0;

    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        if (it == s.begin()) {
			if (*it == 0) {
				printf("00000");
			}
			else {
				printf("%5d", *it);
			}
        }
        else {
			if (*it == 0) {
				printf("00000");
			}
			else {
				printf(" %5d", *it);
			}
        }
    }

	return 0;
}

//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//int main() {
//
//    int n, m, num, size, position;
//    int arr1[50000];
//    int arr2[50000];
//    int arr[10000];
//    set<int> s;
//    cin >> n;
//
//    for (int i = 0; i < 50000; i++) {
//        arr1[i] = -1;
//        arr2[i] = -1;
//    }
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr1[i];
//        cin >> arr2[i];
//    }
//    cin >> m; size = 0;
//    for (int i = 0; i < m; i++) {
//        cin >> num;
//        arr[i] = num;
//    }
//
//    for (int i = 0; i < m; i++) {
//        bool flag = true;
//        for (int j = 0; j < n; j++) {
//            if (arr[i] == arr1[j] || arr[i] == arr2[j]) {
//                flag = false;
//                position = j;
//                break;
//            }
//        }
//        if (flag) {
//            s.insert(arr[i]);
//        }
//        else {
//            if (arr1[position] == arr[i]) {
//                bool flag1 = true;
//                for (int j = 0; j < m; j++) {
//                    if (arr2[position] == arr[j]) {
//                        flag1 = false;
//                        break;
//                    }
//                }
//                if (flag1) {
//                    s.insert(arr[i]);
//                }
//            }
//            else if (arr2[position] == arr[i]) {
//                bool flag1 = true;
//                for (int j = 0; j < m; j++) {
//                    if (arr1[position] == arr[j]) {
//                        flag1 = false;
//                        break;
//                    }
//                }
//                if (flag1) {
//                    s.insert(arr[i]);
//                }
//            }
//        }
//
//    }
//
//    cout << s.size() << endl;
//    if (s.size() == 0) return 0;
//
//    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//        if (it == s.begin()) {
//            printf("%5d", *it);
//        }
//        else {
//            printf(" %5d", *it);
//        }
//    }
//
//    return 0;
//}