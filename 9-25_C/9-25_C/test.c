#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
////节点的结构类型
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
////创建链表，能够输入数据
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
////利用链表来求两个有序链表的并集，并且按升序排序
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
//
////从并集的链表中找出重复的元素。因为是有序表，所以重复的值的数量超过两个，只要找出相邻两个数相等对应的数
////将找到的数据存放到一个新的链表中返回
//struct ListNode* intersectionlist(struct ListNode* list) {
//    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
//    ret->next = NULL;
//    struct ListNode* p, * q, * t;
//    p = list; t = ret;
//    int num = 0;
//    while (p->next) {
//        if (p->data == p->next->data) {
//            q = (struct ListNode*)malloc(sizeof(struct ListNode));
//            q->data = p->data;
//            q->next = NULL;
//            t->next = q;
//            t = q;
//        }
//        p = p->next;
//    }
//    return ret;
//}
//
////输出链表，若交集为空，就输出NULL
//void printList(struct ListNode* list) {
//    struct ListNode* p = list->next;
//    if (p == NULL) {
//        printf("NULL");
//    }
//    while (p) {
//        if (p->next == NULL) {
//            printf("%d", p->data);
//        }
//        else {
//            printf("%d ", p->data);
//        }
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
//    
//    list1 = intersectionlist(list1);
//
//    printList(list1);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
////节点的结构类型
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
////创建链表，能够输入数据
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
//struct ListNode* intersectionlist(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
//    ret->next = NULL;
//    list1 = list1->next;
//    list2 = list2->next;
//    struct ListNode* p = ret;
//    while (list1 && list2) {
//        if (list1 == NULL || list1->data > list2->data) {
//            //不相等
//            list2 = list2->next;
//        }
//        else if (list2 == NULL || list2->data > list1->data) {
//            list1 = list1->next;
//        }
//        else {
//            //相等情况
//            struct ListNode* q = (struct ListNode*)malloc(sizeof(struct ListNode));
//            q->next = NULL;
//            q->data = list1->data;
//            p->next = q;
//            p = q;
//            list1 = list1->next;
//            list2 = list2->next;
//        }
//    }
//    return ret;
//}
//
////输出链表，若交集为空，就输出NULL
//void printList(struct ListNode* list) {
//    struct ListNode* p = list->next;
//    if (p == NULL) {
//        printf("NULL");
//    }
//    while (p) {
//        if (p->next == NULL) {
//            printf("%d", p->data);
//        }
//        else {
//            printf("%d ", p->data);
//        }
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    struct ListNode* list1, * list2, * list3;
//
//    list1 = createlist();
//    list2 = createlist();
//
//    list3 = intersectionlist(list1,list2);
//
//    printList(list3);
//
//    return 0;
//}