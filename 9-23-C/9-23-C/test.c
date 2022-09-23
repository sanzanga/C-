#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
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
//
///* 你的代码将被嵌在这里 */
//struct ListNode* createlist()
//{
//    struct ListNode* head, * p, * t;
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    t = head;
//    t->next = NULL;
//    int num = 0;
//    while (1) {
//        scanf("%d", &num);
//        if (num != -1) {
//            p = (struct ListNode*)malloc(sizeof(struct ListNode));
//            p->data = num;
//            p->next = t->next;
//            t->next = p;
//            t = p;
//        }
//        else
//        {
//            break;
//        }
//    }
//    return head;
//}
//
//struct ListNode* deleteeven(struct ListNode* head)
//{
//    struct ListNode* p, * q;
//    p = head; q = head;
//    while (q != NULL) {
//        if (q->data % 2 == 0) {
//            p->next = q->next;
//            q = p->next;
//        }
//        else {
//            p = p->next;
//            q = q->next;
//        }
//    }
//    return head->next;
//}
//


//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* createlist(); /*裁判实现，细节不表*/
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
//struct ListNode* createlist()
//{
//    struct ListNode* head, * p, * t;
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    t = head;
//    t->next = NULL;
//    int num = 0;
//    while (1) {
//        scanf("%d", &num);
//        if (num != -1) {
//            p = (struct ListNode*)malloc(sizeof(struct ListNode));
//            p->data = num;
//            p->next = t->next;
//            t->next = p;
//            t = p;
//        }
//        else
//        {
//            break;
//        }
//    }
//    return head;
//}
//
//struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* p1, * p2, * p3;
//    p1 = list1->next; p2 = list2->next; p3 = ret;
//    while (p1 && p2) {
//        //list1和list2都没有到达链表的结尾，依次选取两个表中较小的值插入到ret当中
//        if (p1->data <= p2->data) {
//            p3->next = p1;
//            p3 = p1;
//            p1 = p1->next;
//        }
//        else {
//            p3->next = p2;
//            p3 = p2;
//            //p3->next = NULL;
//            p2 = p2->next;
//        }
//    }
//    if (p1) {
//        p3->next = p1;
//    }
//    if (p2) {
//        p3->next = p2;
//    }
//    return ret->next;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
////创建循环链表
//struct ListNode* createList(int n) {
//    struct ListNode* List, * p, * q;
//    List = (struct ListNode*)malloc(sizeof(struct ListNode));
//    List->next = List; q = List;
//    int num = 0;
//    for (int i = 0; i < n; i++) {
//        p = (struct ListNode*)malloc(sizeof(struct ListNode));
//        scanf("%d", &num);
//        p->data = num;
//        p->next = q->next;
//        q->next = p;
//        q = p;
//    }
//    List = List->next;
//    q->next = List;
//    return List;
//}
//
//void leftMoveArray(struct ListNode* List, int m, int n)
//{
//    struct ListNode* p;
//    p = List;
//    for (int i = 0; i < m; i++) {
//        p = p->next;
//    }
//    for (int i = 0; i < n; i++) {
//        if (i != n - 1)
//            printf("%d ", p->data);
//        else
//            printf("%d \n", p->data);
//        p = p->next;
//    }
//}
//
//int main() {
//
//    int n, m;
//    scanf("%d %d", &n, &m);
//    struct ListNode* List;
//    List = createList(n);
//    leftMoveArray(List, m, n);
//
//    return 0;
//}



#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* createlist(); /*裁判实现，细节不表*/
struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2);

struct ListNode* intersectionlist(struct ListNode* list) {
    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
    ret->next = NULL;
    struct ListNode* p, * q, * t;
    p = list; t = ret;
    int num = 0;
    while (p->next) {
        if (p->data == p->next->data) {
            q= (struct ListNode*)malloc(sizeof(struct ListNode));
            q->data = p->data;
            q->next = NULL;
            t->next = q;
            t = q;
        }
        p = p->next;
    }
    return ret;
}

void printList(struct ListNode* list) {
    struct ListNode* p = list->next;
    if (p == NULL) {
        printf("NULL");
    }
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* list1, * list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printList(list1);

    list1 = intersectionlist(list1);

    printList(list1);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode* createlist()
{
    struct ListNode* head, * p, * t;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    t = head;
    t->next = NULL;
    int num = 0;
    while (1) {
        scanf("%d", &num);
        if (num != -1) {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = num;
            p->next = t->next;
            t->next = p;
            t = p;
        }
        else
        {
            break;
        }
    }
    return head;
}

struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p1, * p2, * p3;
    p1 = list1->next; p2 = list2->next; p3 = ret;
    while (p1 && p2) {
        //list1和list2都没有到达链表的结尾，依次选取两个表中较小的值插入到ret当中
        if (p1->data <= p2->data) {
            p3->next = p1;
            p3 = p1;
            p1 = p1->next;
        }
        else {
            p3->next = p2;
            p3 = p2;
            //p3->next = NULL;
            p2 = p2->next;
        }
    }
    if (p1) {
        p3->next = p1;
    }
    if (p2) {
        p3->next = p2;
    }
    return ret->next;
}