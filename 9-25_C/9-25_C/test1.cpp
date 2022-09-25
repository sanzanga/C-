//#include <iostream>
//using namespace std;
//#include <string>
//
//class Stack {
//public:
//    void push(int x) {
//        s[top_index] = x;
//        this->top_index++;
//    }
//    void pop() {
//        if (top_index > 0) {
//            this->top_index--;
//            cout << s[top_index] << endl;
//        }
//        else {
//            cout << "error" << endl;
//        }
//    }
//    void top() {
//        if (top_index > 0) {
//            cout << s[top_index - 1] << endl;
//        }
//        else {
//            cout << "error" << endl;
//        }
//    }
//
//private:
//    int s[100000];
//    int top_index = 0;
//};
//
//int main() {
//
//    Stack s;
//    int a;
//    string str;
//    cin >> a;
//    for (int i = 0; i < a; i++) {
//        cin >> str;
//        if (str == "push") {
//            int num;
//            cin >> num;
//            s.push(num);
//        }
//        if (str == "pop") {
//            s.pop();
//        }
//        if (str == "top") {
//            s.top();
//        }
//    }
//
//    return 0;
//}

