//#include <iostream>
//using namespace std;
//
//struct Queue {
//    int* data;
//    int front;
//    int rear;
//    int MaxSize;
//    int size;
//};
//
//int push(struct Queue* queue, int num) {
//    if (queue->size == queue->MaxSize) {
//        return 0;//表示队列已经满了
//    }
//    queue->data[queue->rear] = num;
//    queue->rear = (queue->rear + 1) % queue->MaxSize;
//    queue->size++;
//    return 1;
//}
//
//int pop(struct Queue* queue, int& num) {
//    if (queue->size == 0) {
//        return 0;
//    }
//    num = queue->data[queue->front];
//    queue->front = (queue->front + 1) % queue->MaxSize;
//    queue->size--;
//    return 1;
//}
//
//int front(struct Queue* queue, int& num) {
//    if (queue->size == 0) {
//        return 0;
//    }
//    num = queue->data[queue->front];
//    return 1;
//}
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//    struct Queue* queue = new struct Queue;
//    queue->data = new int[n];
//    queue->front = 0; queue->rear = 0; queue->MaxSize = n; queue->size = 0;
//    for (int i = 0; i < m; i++) {
//        string op;
//        cin >> op;
//        if (op == "push") {
//            int num;
//            cin >> num;
//            int ret = push(queue, num);
//            if (ret == 0) {
//                cout << "full" << endl;
//            }
//        }
//        else if (op == "front") {
//            int num;
//            int ret = front(queue, num);
//            if (ret == 0) {
//                cout << "empty" << endl;
//            }
//            else {
//                cout << num << endl;
//            }
//        }
//        else if (op == "pop") {
//            int num;
//            int ret = pop(queue, num);
//            if (ret == 0) {
//                cout << "empty" << endl;
//            }
//            else {
//                cout << num << endl;
//            }
//        }
//    }
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


//#include <iostream>
//using namespace std;
//
//struct Queue {
//    int data[100001];
//    int front;
//    int rear;
//};
//
//void push(struct Queue* queue, int num) {
//    queue->data[queue->rear++] = num;
//}
//
//int pop(struct Queue* queue, int& num) {
//    if (queue->rear == queue->front) {
//        return 0;
//    }
//    num = queue->data[queue->front++];
//    return 1;
//}
//
//int front(struct Queue* queue, int& num) {
//    if (queue->rear == queue->front) {
//        return 0;
//    }
//    num = queue->data[queue->front];
//    return 1;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    struct Queue* queue = new struct Queue;
//    queue->front = 0;
//    queue->rear = 0;
//    for (int i = 0; i < n; i++) {
//        string op;
//        cin >> op;
//        if (op == "push") {
//            int num;
//            cin >> num;
//            push(queue, num);
//        }
//        else if (op == "pop") {
//            int num;
//            int ret = pop(queue, num);
//            if (ret == 0) {
//                cout << "error" << endl;
//            }
//            else {
//                cout << num << endl;
//            }
//        }
//        else if (op == "front") {
//            int num;
//            int ret = front(queue, num);
//            if (ret == 0) {
//                cout << "error" << endl;
//            }
//            else {
//                cout << num << endl;
//            }
//        }
//    }
//
//}
//// 64 位输出请用 printf("%lld")



//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     * 返回表达式的值
//     * @param s string字符串 待计算的表达式
//     * @return int整型
//     */
//    int solve(string s) {
//        // write code here
//        stack<int> val;
//        stack<char> ops;
//        for (int i = 0; i <= s.length();) {
//            if (s[i] >= '0' && s[i] < '9') {
//                int num = toInt(s, i);
//                val.push(num);
//            }
//            else if (ops.empty() || s[i] == '(' || ops.top() == '(') {
//                ops.push(s[i++]);
//            }
//            else if (s[i] == '*') {
//                int num1 = val.top();
//                int num2 = toInt(s, ++i);
//                val.pop();
//                val.push(num1 * num2);
//            }
//            else {
//                int num2 = val.top();
//                val.pop();
//                int num1 = val.top();
//                val.pop();
//                if (ops.top() == '+') {
//                    val.push(num1 + num2);
//                }
//                else if (ops.top() == '-') {
//                    val.push(num1 - num2);
//                }
//                else if (ops.top() == '*') {
//                    val.push(num1 * num2);
//                }
//                ops.pop();
//                if (s[i] == ')') {
//                    ops.pop();
//                    i++;
//                }
//                else if (i == s.length()) {
//                    break;
//                }
//            }
//        }
//        return val.top();
//    }
//    int toInt(string s, int& i) {
//        int sum = 0;
//        while (s[i] >= '0' && s[i] <= '9') {
//            sum = sum * 10 + s[i++] - '0';
//        }
//        return sum;
//    }
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
// 64 位输出请用 printf("%lld")