#define _CRT_SECURE_NO_WARNINGS 1

///* ��������ɾ�Ĳ���� */
//#include<stdio.h>
//#define MAXN 10000    /* ������ų�����ʾ����a�ĳ��� */
//
//int Count = 0;        /* ��ȫ�ֱ���Count��ʾ����a�д������Ԫ�ظ��� */
//void select(int a[], int option, int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */
//int input_array(int a[]);    /* ������������a�ĺ��� */
//void print_array(int a[]);    /* �����������a�ĺ��� */
//int insert(int a[], int value);    /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */
//int del(int a[], int value);    /* ɾ����������a�е���value��Ԫ�صĺ��� */
//int modify(int a[], int value1, int value2); /* ����������a�е���value1��Ԫ�أ��滻Ϊvalue2 */
//int query(int a[], int value);     /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */
//
//int main(void)
//{
//    int option, value, a[MAXN];
//
//    if (input_array(a) == -1) {     /* ���ú��������������� a */
//        printf("Error");        /* a�����������飬�������Ӧ����Ϣ */
//        return 0;
//    }
//
//    printf("[1] Insert\n");    /* ����4����ʾ�˵�*/
//    printf("[2] Delete\n");
//    printf("[3] Update\n");
//    printf("[4] Query\n");
//    printf("[Other option] End\n");
//    while (1) {            /* ѭ�� */
//        scanf("%d", &option);         /* �����û�����ı�� */
//        if (option < 1 || option > 4) {    /* �������1��2��3��4����ı�ţ�����ѭ�� */
//            break;
//        }
//        scanf("%d", &value);         /* �����û�����Ĳ���value */
//        select(a, option, value);         /* ���ÿ��ƺ��� */
//        printf("\n");
//    }
//    printf("Thanks.");            /* �������� */
//
//    return 0;
//}
//
///* ���ƺ��� */
//void select(int a[], int option, int value)
//{
//    int index, value2;
//
//    switch (option) {
//    case 1:
//        index = insert(a, value);      /* ���ò��뺯������������ a �в���Ԫ��value */
//        if (index == -1) {        /* ���������Ѵ��ڣ��������Ӧ����Ϣ */
//            printf("Error");
//        }
//        else {
//            print_array(a);        /* ������������������������������a */
//        }
//        break;
//    case 2:
//        index = del(a, value);      /* ����ɾ���������������� a ��ɾ��Ԫ��value */
//        if (index == -1) {        /* û�ҵ�value���������Ӧ����Ϣ */
//            printf("Deletion failed.");
//        }
//        else {
//            print_array(a);         /* ����������������ɾ�������������a */
//        }
//        break;
//    case 3:
//        scanf("%d", &value2);         /* �����û�����Ĳ���value2 */
//        index = modify(a, value, value2);      /* �����޸ĺ������������� a ���޸�Ԫ��value��ֵΪvalue2 */
//        if (index == -1) {            /* û�ҵ�value����vaule2�Ѵ��ڣ��������Ӧ����Ϣ */
//            printf("Update failed.");
//        }
//        else {
//            print_array(a);         /* �����������������޸ĺ����������a */
//        }
//        break;
//    case 4:
//        index = query(a, value);     /* ���ò�ѯ�������������� a �в���Ԫ��value */
//        if (index == -1) {        /* û�ҵ�value���������Ӧ����Ϣ */
//            printf("Not found.");
//        }
//        else {            /* �ҵ����������Ӧ���±� */
//            printf("%d", index);
//        }
//        break;
//    }
//}
//
///* ��������뺯�� */
//int input_array(int a[])
//{
//    scanf("%d", &Count);
//    for (int i = 0; i < Count; i++) {
//        scanf("%d", &a[i]);
//        if (i > 0 && a[i] <= a[i - 1]) {    /* a������������ */
//            return -1;
//        }
//    }
//
//    return 0;
//}
//
///* ������������ */
//void print_array(int a[])
//{
//    for (int i = 0; i < Count; i++) { /* ���ʱ�������ּ���һ���ո�ֿ�����ĩ�޿ո� */
//        if (i == 0) {
//            printf("%d", a[i]);
//        }
//        else {
//            printf(" %d", a[i]);
//        }
//    }
//}
//
///* ����������д�� */
//int insert(int a[], int value)
//{
//    int position = 0;
//    for (int i = 0; i < Count; i++) {
//        if (a[i] == value) {
//            return -1;
//        }
//        else if (a[i] > value) {
//            position = i;
//            break;
//        }
//    }
//    for (int i = Count; i > position; i--) {
//        a[i] = a[i - 1];
//    }
//    a[position] = value;
//    Count++;
//    return 1;
//}
//int del(int a[], int value)
//{
//    int position = -1;
//    for (int i = 0; i < Count; i++) {
//        if (a[i] == value) {
//            position = i;
//            break;
//        }
//    }
//    if (position == -1) {
//        return -1;
//    }
//    for (int i = position; i < Count - 1; i++) {
//        a[i] = a[i + 1];
//    }
//    Count--;
//    return 1;
//}
//int modify(int a[], int value1, int value2)
//{
//    int position = -1;
//    for (int i = 0; i < Count; i++) {
//        if (a[i] == value1) {
//            position = i;
//            break;
//        }
//    }
//    if (position == -1) {
//        return -1;
//    }
//    del(a, value1);
//    int ret = insert(a, value2);
//    if (ret == -1) {
//        return -1;
//    }
//    return 1;
//}
//int query(int a[], int value)
//{
//    int left = 0;
//    int right = Count;
//    int mid = 0;
//    while (left <= right) {
//        mid = (left + right) / 2;
//        if (value > a[mid]) {
//            left = mid + 1;
//        }
//        else if (value < a[mid]) {
//            right = mid - 1;
//        }
//        else {
//            return mid;
//        }
//    }
//    return -1;
//}



//#include<iostream>
//using namespace std;
//
//#define m 16 
//#define NULLKEY 0 //��ԪΪ�յı��
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
//        cout << "search success��The key is located in " << result + 1;
//    else
//        cout << "search failed";
//    return 0;
//}
//
//
///* ����������д�� */

