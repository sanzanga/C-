//#include <iostream>
//using namespace std;
//
//typedef struct listNode {
//	struct listNode* next;
//	int data;
//}listNode, * listLink;
////创建单链表
//void createLink(int n, listLink& list) {
//	struct listNode* p, * t;
//	p = list;
//	p->next = NULL;
//	int data = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> data;
//		t = new listNode;
//		t->data = data;
//		t->next = p->next;
//		p->next = t;
//		p = t;
//	}
//}
//
//void outputList(listLink list, int len)
//{
//	struct listNode* p;
//	p = list->next;
//	while (p) {
//		if (p->next == NULL) {
//			cout << p->data << endl;
//		}
//		else {
//			cout << p->data << " ";
//		}
//		p = p->next;
//	}
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//	listLink list;
//	createLink(n, list);
//	//输出链表
//	outputList(list, n);
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
////创建栈的数据类型
//template<class T>
//struct Stack {
//	T data[1000];//数据
//	int top = 0;//栈顶的位置 
//};
//
////栈的初始化
//void createStack(Stack<int>& S1, Stack<char>& S2, int len) {
//	int num = 0; char op;
//	for (int i = 0; i < len; i++) {
//		cin >> num;
//		S1.data[S1.top] = num;
//		++S1.top;
//	}
//	for (int i = 0; i < len - 1; i++) {
//		cin >> op;
//		S2.data[S2.top] = op;
//		++S2.top;
//	}
//}
//
////进行计算
//bool  calculate(Stack<int>& S1, Stack<char>& S2, int& ret)
//{
//	int num1, num2; char op;
//	while (S1.top && S2.top) {
//		--S1.top;
//		num1 = S1.data[S1.top];
//		--S1.top;
//		num2 = S1.data[S1.top];
//		S2.top--;
//		op = S2.data[S2.top];
//		if (op == '+') ret = num2 + num1;
//		else if (op == '-') ret = num2 - num1;
//		else if (op == '*') ret = num2 * num1;
//		else {
//			if (num1 == 0) {
//				cout << "ERROR: " << num2 << "/" << num1 << endl;
//				return false;
//			}
//			else ret = num2 / num1;
//		}
//		S1.data[S1.top] = ret;
//		++S1.top;
//	}
//	return true;
//}
//
//int main() {
//
//	Stack<int> S1;
//	Stack<char> S2;
//	int n, ret;
//	cin >> n;
//	createStack(S1, S2, n);
//	bool res = calculate(S1, S2, ret);
//	if (res) {
//		cout << ret << endl;
//	}
//
//	return 0;
//}

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

//struct ListNode* mergelists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* p1, * p2, * p3;
//    p1 = list1; p2 = list2; p3 = ret;
//    p3->next = NULL;
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
//            //不相等
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
//    list3 = intersectionlist(list1, list2);
//
//    printList(list3);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

//创建循环链表
struct ListNode* createList(int n) {
    struct ListNode* List, * p, * q;
    List = (struct ListNode*)malloc(sizeof(struct ListNode));
    List->next = List; q = List;
    int num = 0;
    for (int i = 0; i < n; i++) {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d", &num);
        p->data = num;
        p->next = q->next;
        q->next = p;
        q = p;
    }
    List = List->next;
    q->next = List;
    return List;
}

void leftMoveArray(struct ListNode* List, int m, int n)
{
    struct ListNode* p;
    p = List;
    for (int i = 0; i < m; i++) {
        p = p->next;
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            printf("%d ", p->data);
        else
            printf("%d\n", p->data);
        p = p->next;
    }
}

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    struct ListNode* List;
    List = createList(n);
    leftMoveArray(List, m, n);

    return 0;
}