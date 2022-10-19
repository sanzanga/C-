///**
// * struct ListNode {
// *	int val;
// *	struct ListNode *next;
// *	ListNode(int x) : val(x), next(nullptr) {}
// * };
// */
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param head ListNode类
//     * @param val int整型
//     * @return ListNode类
//     */
//    ListNode* deleteNode(ListNode* head, int val) {
//        // write code here
//        struct ListNode* p, * q;
//        p = head;
//        if (head == NULL) return NULL;
//        if (p->val == val) return head->next;
//        while (p && p->val != val) {
//            q = p;
//            p = p->next;
//        }
//        q->next = p->next;
//        return head;
//    }
//};


///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};*/
//class Solution {
//public:
//	ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
//		struct ListNode* p;
//		if (pHead1 == NULL && pHead2 == NULL) return NULL;
//		if (pHead1 == NULL && pHead2 != NULL) return pHead2;
//		if (pHead2 == NULL && pHead1 != NULL) return pHead1;
//
//		if (pHead1->val > pHead2->val) {
//			p = pHead2;
//			pHead2 = pHead2->next;
//		}
//		else {
//			p = pHead1;
//			pHead1 = pHead1->next;
//		}
//		struct ListNode* curNode = p;
//		while (pHead1 && pHead2) {
//			if (pHead1->val > pHead2->val) {
//				curNode->next = pHead2;
//				curNode = pHead2;
//				pHead2 = pHead2->next;
//			}
//			else {
//				curNode->next = pHead1;
//				curNode = pHead1;
//				pHead1 = pHead1->next;
//			}
//		}
//
//		if (pHead1) curNode->next = pHead1;
//		if (pHead2) curNode->next = pHead2;
//		return p;
//	}
//};


/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
//class Solution {
//public:
//	ListNode* ReverseList(ListNode* pHead) {
//		struct ListNode* newHead = NULL;
//		while (pHead) {
//			struct ListNode* curNode = pHead->next;
//			pHead->next = newHead;
//			newHead = pHead;
//			pHead = curNode;
//		}
//		return newHead;
//	}
//};


#include <iostream>
using namespace std;

typedef struct LNode {
    int data;
    struct LNode* next;
}LNode, * LinkList;

struct LNode* elemPos(LinkList list, int num) {
    struct LNode* p = new struct LNode;
    p = list->next;
    if (p == NULL) return list;
    if (p->data == num) return list;
    while (p->next && p->next->data != num) {
        p = p->next;
    }
    return p;
}

void deleteLNode(LinkList list, int num) {
    struct LNode* p = new struct LNode;
    p = list->next;
    if (p == NULL) {
        return;
    }
    else {
        struct LNode* q = new struct LNode;
        q = list;
        while (p && p->data != num) {
            q = p;
            p = p->next;
        }
        if (p->next == NULL) {
            //最后一个是要删除的元素
            q->next = NULL;
            delete p;
        }
        else {
            q->next = p->next;
            delete p;
        }
    }
}

void outPutLink(LinkList list) {
    struct LNode* p = new struct LNode;
    p = list->next;
    if (p == NULL) cout << "NULL" << endl;
    else {
        while (p) {
            cout << p->data << " ";
            p = p->next;
        }
    }
}

int main() {

    int n;
    cin >> n;
    struct LNode* list = new struct LNode;
    //LinkList list = new struct LNode;
    list->next = NULL;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "insert") {
            int num1, num2;
            cin >> num1 >> num2;
            struct LNode* p = elemPos(list, num1);
            if (p) {
                struct LNode* q = new struct LNode;
                q->data = num2;
                q->next = p->next;
                p->next = q;
            }
            else {
                struct LNode* q = new struct LNode;
                q->data = num2;
                q->next = NULL;
                p->next = q;
            }
        }
        else {
            int num;
            cin >> num;
            deleteLNode(list, num);
        }
    }
    outPutLink(list);

    return 0;
}
