#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5
#define ERROR -1
typedef enum { false, true } bool;
typedef int ElementType;
typedef int Position;
typedef struct LNode* List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List MakeEmpty();
Position Find(List L, ElementType X);
bool Insert(List L, ElementType X, Position P);
bool Delete(List L, Position P);

int main()
{
    List L;
    ElementType X;
    Position P;
    int N;

    L = MakeEmpty();
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &X);
        if (Insert(L, X, 0) == false)
            printf(" Insertion Error: %d is not in.\n", X);
    }
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &X);
        P = Find(L, X);
        if (P == ERROR)
            printf("Finding Error: %d is not in.\n", X);
        else
            printf("%d is at position %d.\n", X, P);
    }
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &P);
        if (Delete(L, P) == false)
            printf(" Deletion Error.\n");
        if (Insert(L, 0, P) == false)
            printf(" Insertion Error: 0 is not in.\n");
    }
    return 0;
}

List MakeEmpty()
{
    List L;
    L = (List)malloc(sizeof(struct LNode));
    L->Last = -1;
    return L;

}
Position Find(List L, ElementType X)
{
    int k = 0;
    for (Position i = 0; i <= L->Last; i++)
    {
        if (X == L->Data[i])
        {
            k++;
            return i;
        }

    }
    if (k == 0)return ERROR;
}
bool Insert(List L, ElementType X, Position P)
{//�ռ�����
    if (L->Last == MAXSIZE - 1)
    {
        printf("FULL");
        return false;
    }
    //pָ��Ƿ�λ��
    if (P > L->Last+1 || P < 0)
    {
        printf("ILLEGAL POSITION");
        return false;
    }
    int m = 0;
    for (Position i = 0; i <= L->Last; i++)
    {
        int num = 0;//4 3 2 1
        int num1 = 0;
        if (i == P)
        {
            num = L -> Data[i];//4
            L->Data[i] = X;//5 3 2 1
            m++;
        }
        if (m == 1)
        {
            num1 = L->Data[i];//3 2 1 0
            L->Data[i] = num;//5 4 3 2 1
            num = num1;//1
        }
    }
    L->Last++;
    return true;
}
bool Delete(List L, Position P)
{//�Ƿ�ָ��
    if (P<0 || P>L->Last)
    {
        printf("POSITION  %d EMPTY", P);
        return false;

    }
    else
    {
        for (Position i = 0; i < L->Last; i++)
        {
            if (i >= P)
            {
                L->Data[i] = L->Data[i + 1];
            }

        }
        L->Last--;
        return true;
    }
}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 5
//#define ERROR -1
//typedef enum { false, true } bool;
//typedef int ElementType;
//typedef int Position;
//typedef struct LNode* List;
//struct LNode {
//    ElementType Data[MAXSIZE];
//    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
//};
//
//List MakeEmpty();
//Position Find(List L, ElementType X);
//bool Insert(List L, ElementType X, Position P);
//bool Delete(List L, Position P);
//
//int main()
//{
//    List L;
//    ElementType X;
//    Position P;
//    int N;
//
//    L = MakeEmpty();
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &X);
//        if (Insert(L, X, 0) == false)
//            printf(" Insertion Error: %d is not in.\n", X);
//    }
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &X);
//        P = Find(L, X);
//        if (P == ERROR)
//            printf("Finding Error: %d is not in.\n", X);
//        else
//            printf("%d is at position %d.\n", X, P);
//    }
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &P);
//        if (Delete(L, P) == false)
//            printf(" Deletion Error.\n");
//        if (Insert(L, 0, P) == false)
//            printf(" Insertion Error: 0 is not in.\n");
//    }
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//List MakeEmpty()//����������һ���յ����Ա�
//{
//    List L = (List)malloc(sizeof(struct LNode));
//    // L->Data=(ElementType*)malloc(sizeof(ElementType)*MAXSIZE);
//    L->Last = -1;
//    return L;
//}
//
//Position Find(List L, ElementType X)//�������Ա���X��λ�á����Ҳ����򷵻�ERROR��
//{
//    if (!L) {
//        return ERROR;
//    }
//    for (int i = 0; i <= L->Last; i++) {
//        if (L->Data[i] == X) {
//            return i;
//        }
//    }
//    return ERROR;
//}
//
//bool Insert(List L, ElementType X, Position P)//��X������λ��P������true�����ռ����������ӡ��FULL��������false���������Pָ��Ƿ�λ�ã����ӡ��ILLEGAL POSITION��������false��
//{
//    if ((L->Last + 1) == MAXSIZE) {
//        printf("FULL");
//        return false;
//    }
//    if (P<0 || P>L->Last + 1) {
//        printf("ILLEGAL POSITION");
//        return false;
//    }
//    for (int i = L->Last + 1; i > P; i--) {
//        L->Data[i] = L->Data[i - 1];
//    }
//    L->Data[P] = X;
//    L->Last++;
//    return true;
//}
//
//bool Delete(List L, Position P)
//{
//    if (P<0 || P>L->Last) {
//        printf("POSITION %d EMPTY", P);
//        return false;
//    }
//    for (int i = P; i < L->Last; i++) {
//        L->Data[i] = L->Data[i + 1];
//    }
//    L->Last--;
//    return true;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAXSIZE 5
//#define ERROR -1
//typedef enum { false, true } bool;
//typedef int ElementType;
//typedef int Position;
//typedef struct LNode* List;
//struct LNode {
//    ElementType Data[MAXSIZE];
//    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
//};
//
//List MakeEmpty();
//Position Find(List L, ElementType X);
//bool Insert(List L, ElementType X, Position P);
//bool Delete(List L, Position P);
//
//int main()
//{
//    List L;
//    ElementType X;
//    Position P;
//    int N;
//
//    L = MakeEmpty();
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &X);
//        if (Insert(L, X, 0) == false)
//            printf(" Insertion Error: %d is not in.\n", X);
//    }
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &X);
//        P = Find(L, X);
//        if (P == ERROR)
//            printf("Finding Error: %d is not in.\n", X);
//        else
//            printf("%d is at position %d.\n", X, P);
//    }
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%d", &P);
//        if (Delete(L, P) == false)
//            printf(" Deletion Error.\n");
//        if (Insert(L, 0, P) == false)
//            printf(" Insertion Error: 0 is not in.\n");
//    }
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//List MakeEmpty()//����������һ���յ����Ա�
//{
//    List L = (List)malloc(sizeof(struct LNode));
//    // L->Data=(ElementType*)malloc(sizeof(ElementType)*MAXSIZE);
//    L->Last = -1;
//    return L;
//}
//
//Position Find(List L, ElementType X)//�������Ա���X��λ�á����Ҳ����򷵻�ERROR��
//{
//    if (!L) {
//        return ERROR;
//    }
//    for (int i = 0; i <= L->Last; i++) {
//        if (L->Data[i] == X) {
//            return i;
//        }
//    }
//    return ERROR;
//}
//
//bool Insert(List L, ElementType X, Position P)//��X������λ��P������true�����ռ����������ӡ��FULL��������false���������Pָ��Ƿ�λ�ã����ӡ��ILLEGAL POSITION��������false��
//{
//    if ((L->Last + 1) == MAXSIZE) {
//        printf("FULL");
//        return false;
//    }
//    if (P<0 || P>L->Last + 1) {
//        printf("ILLEGAL POSITION");
//        return false;
//    }
//    for (int i = L->Last + 1; i > P; i--) {
//        L->Data[i] = L->Data[i - 1];
//    }
//    L->Data[P] = X;
//    L->Last++;
//    return true;
//}
//
//bool Delete(List L, Position P)
//{
//    if (P<0 || P>L->Last) {
//        printf("POSITION %d EMPTY", P);
//        return false;
//    }
//    for (int i = P; i < L->Last; i++) {
//        L->Data[i] = L->Data[i + 1];
//    }
//    L->Last--;
//    return true;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
////����ѭ������
//typedef struct node
//{
//    int data;
//    struct node* next;
//}node;
//
////����ͷ�ڵ�
//node* add_head()
//{
//    node* Head = (node*)malloc(sizeof(node));
//    if (Head == NULL)
//        return NULL;
//    Head->next = Head;
//    return Head;
//
//}
//
////β�巨
//void add_node(node* Head, int data)
//{
//    node* new = (node*)malloc(sizeof(node));
//    if (new == NULL)
//        return;
//    //�ڵ��Ա��ֵ
//    new->data = data;
//    new->next = NULL;
//    //����
//
//    node* pT = NULL;
//    for (pT = Head; pT->next != Head; pT = pT->next);
//
//    new->next = pT->next;
//    pT->next = new;
//}
//
////�������
//void output(node* Head)
//{
//    if (Head->next == Head)
//        return;
//    node* pT = Head->next;
//    while (pT != Head)
//    {
//        printf("%d ", pT->data);
//        pT = pT->next;
//    }
//}
//
//int main(void)
//{
//    node* Head = add_head();//ͷ�ڵ�
//    int n, i, j;
//    scanf("%d", &n);
//    int arr[n];
//
//    //�����̼�������ݴ�ŵ�������
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
//    //�����ݲ�������
//    for (j = 0; j < n; j++)
//        add_node(Head, arr[j]);
//    output(Head);
//
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
////����ѭ������
//typedef struct node
//{
//    int data;
//    struct node* next;
//}node;
//
////����ͷ�ڵ�
//node* add_head()
//{
//    node* Head = (node*)malloc(sizeof(node));
//    if (Head == NULL)
//        return NULL;
//    Head->next = Head;
//    return Head;
//
//}
//
////β�巨
//void add_node(node* Head, int data)
//{
//    node* new = (node*)malloc(sizeof(node));
//    if (new == NULL)
//        return;
//    //�ڵ��Ա��ֵ
//    new->data = data;
//    new->next = NULL;
//    //����
//
//    node* pT = NULL;
//    for (pT = Head; pT->next != Head; pT = pT->next);
//
//    new->next = pT->next;
//    pT->next = new;
//}
//
////�ڵ㽻��
//void swap_node(node* Head)
//{
//    node* p1 = Head->next;//��һ���ڵ�
//    node* p2 = Head->next->next;//�ڶ����ڵ�
//    //ǰ�����ڵ㽻��
//    p1->next = p2->next;
//    p2->next = p1;
//    Head->next = p2;
//
//    node* pT = NULL;
//    node* pT1 = NULL;
//    node* pT2 = NULL;
//    for (pT = Head; pT->next->next->next != Head; pT = pT->next);//�ҵ������������ڵ�
//    for (pT1 = Head; pT1->next->next != Head; pT1 = pT1->next);//�����ڶ���
//    for (pT2 = Head; pT2->next != Head; pT2 = pT2->next);//���һ���ڵ�
//    //�������ڵ㽻��
//    pT1->next = Head;
//    pT2->next = pT1;
//    pT->next = pT2;
//}
////�������
//void output(node* Head)
//{
//    if (Head->next == Head)
//        return;
//    node* pT = Head->next;
//    while (pT != Head)
//    {
//        printf("%d ", pT->data);
//        pT = pT->next;
//    }
//}
//
//int main(void)
//{
//    node* Head = add_head();//ͷ�ڵ�
//    int n, i, j;
//    scanf("%d", &n);
//    int arr[n];
//
//    //�����̼�������ݴ�ŵ�������
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
//    //�����ݲ�������
//    for (j = 0; j < n; j++)
//        add_node(Head, arr[j]);
//    swap_node(Head);
//    output(Head);
//
//    return 0;
//}