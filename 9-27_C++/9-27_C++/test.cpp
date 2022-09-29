//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* createlist();
//struct ListNode* deleteeven(struct ListNode* head);
//void printlist(struct ListNode* head)
//{
//    struct ListNode* p = head;
//    while (p) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//
//
///* 你的代码将被嵌在这里 */
//
//struct ListNode* createlist()
//{
//    struct ListNode* p, * head, * r;
//    //头结点创建空表建立
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->data = 0;
//    head->next = NULL;
//    //临时
//    int a;
//    r = head;
//    while (1)
//    {
//        scanf("%d", &a);
//        if (a == -1) return head;
//        else {
//            p = (struct ListNode*)malloc(sizeof(struct ListNode));
//            p->data = a;
//            r->next = p;
//            r = r->next;
//            p->next = NULL;
//        }
//    }
//    return head;
//}
//struct ListNode* deleteeven(struct ListNode* head)
//{//p是删除，s是前驱结点
//    struct ListNode* p, * s;
//    s = head;
//    p = s->next;
//
//    while (p)
//    {
//        if (p->data % 2 == 0 && p->data != 0)
//        {
//            s->next = p->next;
//            p = p->next;
//        }
//        else {
//            s = s->next;
//            p = p->next;
//        }
//    }
//
//    return head->next;
//}
//
//int main()
//{
//    struct ListNode* head;
//
//    head = createlist();
//    head = deleteeven(head);
//    printlist(head);
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* createlist() {
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = head;//不移动head，用tail从head开始记录
//    while (1) {
//        int a;
//        scanf("%d", &a);
//        if (a == -1)break;
//        struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
//        p->data = a;
//        p->next = NULL;
//        tail->next = p;//将p放置于head的依次的后面
//        tail = p;//将p移动至下一位
//    }
//    return head->next;
//}
//struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2);
//void printlist(struct ListNode* head)
//{
//    struct ListNode* p = head;
//    while (p) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    struct ListNode* list1, * list2;
//
//    list1 = createlist();
//    list2 = createlist();
//    list1 = mergelists(list1, list2);
//    printlist(list1);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//
//struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode* a, * b, * list3, * head, * q;
//    a = list1;
//    b = list2;
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    list3 = head;
//    while (a && b) {
//        q = (struct ListNode*)malloc(sizeof(struct ListNode));
//        if (a->data > b->data) {
//            //list3->data = b->data;
//            //list3->next = b;
//            q->data = b->data;
//            q->next = b -> next;
//            b = b->next;
//        }
//        else if (a->data == b->data) {
//            q->data = b->data;
//            q->next = b->next;
//            //list3->next = a;
//            b = b->next;
//            a = a->next;
//        }
//        else {
//            q->data = a->data;
//            q->next = a->next;
//            //list3->next = a;
//            a = a->next;
//        }
//        list3 = list3->next;
//    }
//    while (a->data) {
//        list3->data = a->data;
//        a = a->next;
//        list3 = list3->next;
//    }
//    while (b->data) {
//        list3->data = b->data;
//        b = b->next;
//        list3 = list3->next;
//    }
//    return head;
//}


//#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//struct ListNode* createlist(int n);
//struct ListNode* change(struct ListNode* head);
//void printlist(struct ListNode* head)
//{
//    struct ListNode* p = head;
//    while (p->next != NULL) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << p->data;
//
//}
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    struct ListNode* head;
//    head = createlist(n);
//    if (m <= n)
//    {
//        head = change(head, m, n);
//    }
//    if (m > n)
//    {
//        head = change(head, m - n, n);
//    }
//    printlist(head);
//
//    return 0;
//}
//struct ListNode* createlist(int n)
//{
//    struct ListNode* head, * r, * p;
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->data = 0;
//    head->next = NULL;
//    r = head;
//    int a;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a;
//        p = (struct ListNode*)malloc(sizeof(struct ListNode));
//        p->data = a;
//        r->next = p;
//        r = r->next;
//        p->next = NULL;
//    }
//    return head->next;
//}
//struct ListNode* change(struct ListNode* head, int m, int n)
//{
//    struct ListNode* r, * p, * head1, * r1;
//    p = head;
//    for (int i = 0; i < n; i++)
//    {
//        if (i == m - 1)
//        {
//            r1 = p;
//        }
//        if (i == m)
//        {
//            head1 = p;
//        }
//        if (i == n - 1)
//        {
//            r = p;
//        }
//        p = p->next;
//    }
//    r->next = head;
//    r1->next = NULL;
//    return head1;
//}


//#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//struct ListNode* createlist(int n);
//struct ListNode* change(struct ListNode* head, int m, int n);
//void printlist(struct ListNode* head)
//{
//    struct ListNode* p = head;
//    if (p->next == NULL) return;
//    while (p->next != NULL) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << p->data;
//
//}
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    struct ListNode* head;
//    head = createlist(n);
//    if (m <= n)
//    {
//        head = change(head, m, n);
//    }
//    if (m > n)
//    {
//        int t;
//        t = m % n;
//        head = change(head, t, n);
//    }
//    printlist(head);
//
//    return 0;
//}
//struct ListNode* createlist(int n)
//{
//    struct ListNode* head, * r, * p;
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->data = 0;
//    head->next = NULL;
//    r = head;
//    int a;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a;
//        p = (struct ListNode*)malloc(sizeof(struct ListNode));
//        p->data = a;
//        r->next = p;
//        r = r->next;
//        p->next = NULL;
//    }
//    return head->next;
//}
//struct ListNode* change(struct ListNode* head, int m, int n)
//{
//    if (m == 0) {
//        return head;
//    }
//    struct ListNode* r, * p, * head1, * r1;
//    r1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    r= (struct ListNode*)malloc(sizeof(struct ListNode));
//    head1= (struct ListNode*)malloc(sizeof(struct ListNode));
//    p = head;
//    for (int i = 0; i < n; i++)
//    {
//        if (i == m - 1)
//        {
//            r1 = p;
//        }
//        if (i == m)
//        {
//            head1 = p;
//        }
//        if (i == n - 1)
//        {
//            r = p;
//        }
//        p = p->next;
//    }
//    r->next = head;
//    r1->next = NULL;
//    return head1;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct Node//节点的结构
//{
//    int data;
//    struct Node* next;
//};
//struct Node* creatlist(int a);
//int main()
//{
//    int num;//记录输入几个数
//    int num2 = 0;//用来记录输不输出空格
//    scanf("%d", &num);
//    struct Node* p1;
//    p1 = creatlist(num);
//    while (p1 != NULL) {
//        if (num2 == 0)
//        {
//            printf("%d", p1->data);
//            p1 = p1->next;
//            num2 = 1;
//        }
//        else
//        {
//            printf(" %d", p1->data);
//            p1 = p1->next;
//        }
//    }
//    return 0;
//}
//struct Node* creatlist(int a)
//{
//    int len = a;
//    int num = 0;//链表里数字个数
//    struct Node* head, * p, * tail;
//    head = (struct Node*)malloc(sizeof(struct Node));
//    p = tail = (struct Node*)malloc(sizeof(struct Node));
//    head->next = tail->next = p->next = NULL;//头指针尾指针指向指针都相等都独立
//    for (int i = 0; i < len; i++) {//依次输入
//        scanf("%d", &num);
//        p->data = num;
//        if (head->next == NULL)
//        {
//            head->next = p;
//            tail = p;
//        }
//        else
//        {
//            tail->next = p;
//            tail = p;
//        }
//        p = (struct Node*)malloc(sizeof(struct Node));
//        p->next = NULL;
//    }
//    return head->next;
//}


#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* createlist(); /*裁判实现，细节不表*/
struct ListNode* mergelists(struct ListNode* s1, struct ListNode* s2);
void printlist(struct ListNode* head)
{
    struct ListNode* p = head->next;
    if (head->next == NULL)
    {
        printf("NULL\n");
        return;
    }

    else {
        while (p->next) {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("%d", p->data);
        printf("\n");
    }
}

int main()
{
    struct ListNode* s1, * s2, * s3;

    s1 = createlist();
    //printf("s1=%d",s1->next->data);
    s2 = createlist();
    s3 = mergelists(s1, s2);
    printlist(s3);

    return 0;
}
struct ListNode* createlist()
{
    struct ListNode* p, * head, * r;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->data = 0;
    head->next = NULL;
    r = head;
    int a;

    while (1)
    {
        scanf("%d", &a);
        if (a == -1) return head->next;
        else {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = a;
            r->next = p;
            r = r->next;
            p->next = NULL;
        }

    }
    //printf("head=%d",head->next->next->data);
    return head->next;
}
struct ListNode* mergelists(struct ListNode* s1, struct ListNode* s2)
{
    struct ListNode* s, * head, * p1, * p2;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = NULL;
    s = head;
    p1 = s1;
    p2 = s2;
    if (p2 == NULL || p1 == NULL || (p2 == NULL && p2 == NULL))return NULL;
    else {
        while (p1)
        {
            if (p1->data == p2->data)
            {
                //1 2 5
                //2 4 5 8 10
                s->next = p1;
                s = s->next;
                p1 = p1->next;
                p2 = p2->next;
            }
            else
            {
                if (p2->next == NULL)
                {
                    p1 = p1->next;
                    p2 = s2;
                }
                else {
                    p2 = p2->next;
                }
            }
        }

        //printf("%d",head->data);
        return head;
    }
}
