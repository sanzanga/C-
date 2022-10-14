//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct BNode {
//    int data;
//    struct BNode* lchild;
//    struct BNode* rchild;
//}BNode, * BTree;
//
//BTree InitiTree(int arr1[], int arr2[] , int n)
//{
//    int len = 0;
//    BTree Bt;
//    if (n == 0) return NULL;
//    else {
//        Bt = (struct BNode*)malloc(sizeof(struct BNode));
//        Bt->data = arr1[n - 1];
//        for (int i = 0; i < n; i++) {
//            if (arr1[n - 1] == arr2[i]) {
//                len = i;
//                break;
//            }
//        }
//        Bt->lchild = InitiTree(arr1, arr2, len);
//        Bt->rchild = InitiTree(arr1 + len, arr2 + len + 1, n - len - 1);
//    }
//    return Bt;
//}
//
//void levelOrder(BTree Bt, int n) {
//    BTree p; BTree q[30];
//    int a = 0;
//    int b = 0; int num = 0;
//    if (!Bt) return;
//    else {
//        q[b++] = Bt;
//        while (num != n) {
//            p = q[a++];
//            if (num == n - 1) {
//                printf("%d", p->data);
//                num++;
//            }
//            else {
//                printf("%d ", p->data);
//                num++;
//            }
//            
//            if (p->lchild != NULL) {
//                q[b++] = p->lchild;
//            }
//            if (p->rchild != NULL) {
//                q[b++] = p->rchild;
//            }
//        }
//    }
//}
//
//int main() {
//
//    int n;
//    scanf("%d", &n);
//    int arr1[30], arr2[30];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    BTree Bt = InitiTree(arr1, arr2, n);
//    levelOrder(Bt, n);
//}


//class Solution {
//public:
//    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//        int len = pushV.size();
//        stack<int> s;
//        int top = 0;
//        for (int i = 0; i < len; i++) {
//            while (top < len && (s.empty() || s.top() != popV[i]))
//            {
//                s.push(pushV[top++]);
//            }
//            if (s.top() == popV[i]) {
//                s.pop();
//            }
//            else {
//                return false;
//            }
//        }
//        return true;
//    }
//};

///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param s string字符串
// * @return bool布尔型
// */
//char check(char c) {
//    if (c == ')') {
//        return '(';
//    }
//    if (c == ']') {
//        return '[';
//    }
//    if (c == '}') {
//        return '{';
//    }
//    return 0;
//}
//
//bool isValid(char* s) {
//    // write code here
//    char* stack;
//    int top = 0;
//    stack = (char*)malloc(strlen(s) * sizeof(char));
//    for (int i = 0; i < strlen(s); i++) {
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//            stack[top++] = s[i];
//        }
//        if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
//            if (top == 0) {
//                return 0;
//            }
//            if (stack[top - 1] == check(s[i])) {
//                stack[--top] = '\0';
//            }
//        }
//    }
//    if (strlen(stack) > 0) {
//        return 0;
//    }
//    else {
//        return 1;
//    }
//}


///**
// * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
// *
// *
// * @param tokens string字符串一维数组
// * @param tokensLen int tokens数组长度
// * @return int整型
// */
//int evalRPN(char** tokens, int tokensLen) {
//    // write code here
//    int stack[10000];
//    int top = 0;
//    int ret = 0;
//    int num1, num2;
//    for (int i = 0; i < tokensLen; i++) {
//        if (strcmp(tokens[i], "+") == 0) {
//            num1 = stack[--top]; num2 = stack[--top];
//            ret = num2 + num1;
//            stack[top++] = ret;
//        }
//        else if (strcmp(tokens[i], "-") == 0) {
//            num1 = stack[--top]; num2 = stack[--top];
//            ret = num2 - num1;
//            stack[top++] = ret;
//        }
//        else if (strcmp(tokens[i], "*") == 0) {
//            num1 = stack[--top]; num2 = stack[--top];
//            ret = num2 * num1;
//            stack[top++] = ret;
//        }
//        else if (strcmp(tokens[i], "/") == 0) {
//            num1 = stack[--top]; num2 = stack[--top];
//            ret = num2 / num1;
//            stack[top++] = ret;
//        }
//        else {
//            stack[top++] = atoi(tokens[i]);
//        }
//    }
//    return stack[0];
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//    int top = 0;
//    char stack[300000]; char c;
//    while (scanf("%c", &c) != '\n') { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld")
//        if (top == 0 || stack[top - 1] != c) {
//            stack[top++] = c;
//        }
//        else {
//            --top;
//        }
//    }
//    while (top >= 2) {
//        if (stack[top - 1] == stack[top - 2]) {
//            top -= 2;
//            stack[top] = '\0';
//        }
//        else {
//            break;
//        }
//    }
//
//    if (top == 0) {
//        printf("0");
//    }
//    else {
//        for (int i = 0; i < top; i++) {
//            printf("%c", stack[i]);
//        }
//    }
//    return 0;
//}


#include <stdio.h>

int main() {
    int top = 0;
    char stack[300000];
    scanf("%s", stack);
    int i = 0;
    while (stack[i] != '\0') { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld")
        if (top == 0 || stack[top - 1] != stack[i]) {
            stack[top++] = stack[i];
        }
        else {
            --top;
        }
        i++;
    }
    // }
    // while(top>=2){
    //     if(stack[top-1]==stack[top-2]){
    //        top -=2;
    //        stack[top]='\0';
    //     }
    //     else{
    //         break;
    //     }
    // }

    if (top == 0) {
        printf("0");
    }
    else {
        for (int i = 0; i < top; i++) {
            printf("%c", stack[i]);
        }
    }
    return 0;
}