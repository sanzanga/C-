//#include <iostream>
//using namespace std;
//
//struct SqList {
//    int data[1000];
//    int key;
//};
//
//void HeapAdjust(struct SqList* L, int s, int m) {
//    int ele = L->data[s];
//    for (int j = s / 2; j > 0; j /= 2) {
//        if (j > 0 && L->data[j] > ele) {
//            L->data[s] = L->data[j];
//            s = j;
//        }
//        else {
//            break;
//        }
//    }
//    L->data[s] = ele;
//}
//
//void CreateHeap(struct SqList* L, int len) {
//    for (int i = 2; i <= len; ++i) {
//        HeapAdjust(L, i, len);
//    }
//}
//
//int main() {
//
//    int n, m;
//    int length = 0;
//    cin >> n >> m;
//    struct SqList* L = new struct SqList;
//    for (int i = 1; i <= n; i++) {
//        cin >> L->data[i];
//    }
//    CreateHeap(L, n);
//    int pos = 0;
//    for (int i = 0; i < m; i++) {
//        cin >> pos;
//        while (pos / 2) {
//            cout << L->data[pos] << " ";
//            pos /= 2;
//        }
//        pos = pos / 2;
//        cout << L->data[1] << endl;
//    }
//
//    return 0;
//}

//
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct SqList {
//    int data[1000];
//};
//
//void AdjustHeap(struct SqList* L, int s, int n) {
//    int ele = L->data[s];
//    for (int j = s / 2; j > 0; j / 2) {
//        if (j > 0 && L->data[j] > ele) {
//            L->data[s] = L->data[j];
//            s = j;
//        }
//        else {
//            break;
//        }
//    }
//    L->data[s] = ele;
//}
//
//void CreateHeap(struct SqList* L, int len) {
//    for (int i = 2; i <= len; i++) {
//        AdjustHeap(L, i, len);
//    }
//}
//
//int main() {
//
//    int n, m;
//    string str;
//    cin >> n >> m;
//    struct SqList* L = new struct SqList;
//    for (int i = 1; i <= n; i++) {
//        cin >> L->data[i];
//    }
//    CreateHeap(L, n);
//
//    for (int i = 0; i < m; i++) {
//        cin.getline();
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct SqList {
//    int data[1000];
//};
//
//void AdjustHeap(struct SqList* L, int s, int n) {
//    int ele = L->data[s];
//    for (int j = s / 2; j > 0; j /= 2) {
//        if (j > 0 && L->data[j] > ele) {
//            L->data[s] = L->data[j];
//            s = j;
//        }
//        else {
//            break;
//        }
//    }
//    L->data[s] = ele;
//}
//
//void CreateHeap(struct SqList* L, int len) {
//    for (int i = 2; i <= len; i++) {
//        AdjustHeap(L, i, len);
//    }
//}
//
//int position(struct SqList* L, int x, int len) {
//    for (int i = 1; i <= len; i++) {
//        if (L->data[i] == x) {
//            return i;
//        }
//    }
//    return 0;
//}
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//    struct SqList* L = new struct SqList;
//    for (int i = 1; i <= n; i++) {
//        cin >> L->data[i];
//    }
//    CreateHeap(L, n);
//
//    for (int i = 0; i < m; i++) {
//        int x;
//        cin >> x;
//        string s;
//        cin >> s;
//        if (s == "is") {
//            string ss;
//            cin >> ss;
//            if (ss == "the") {
//                string sss;
//                cin >> sss;
//                if (sss == "root") {//1
//                    if (L->data[i] == x) {
//                        cout << "T" << endl;
//                    }
//                    else {
//                        cout << "F" << endl;
//                    }
//                }
//                else {//3
//                    string s1;
//                    int y;
//                    cin >> s1 >> y;
//                    if (position(L, x, n) == position(L, y, n) / 2) {
//                        cout << "T" << endl;
//                    }
//                    else {
//                        cout << "F" << endl;
//                    }
//                }
//            }
//            else {//4
//                string s1, s2;
//                int y;
//                cin >> s1 >> s2 >> y;
//                if (position(L, x, n) / 2 == position(L, y, n)) {
//                    cout << "T" << endl;
//                }
//                else {
//                    cout << "F" << endl;
//                }
//            }
//        }
//        else {//2
//            int y; string s1, s2;
//            cin >> y >> s1 >> s2;
//            if (position(L, x, n) / 2 == position(L, y, n) / 2) {
//                cout << "T" << endl;
//            }
//            else {
//                cout << "F" << endl;
//            }
//        }
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//struct SqList {
//    int data[1002];
//};
//
//void AdjustHeap(struct SqList* L, int s, int n) {
//    int ele = L->data[s];
//    for (int j = s / 2; j > 0; j /= 2) {
//        if (j > 0 && L->data[j] > ele) {
//            L->data[s] = L->data[j];
//            s = j;
//        }
//        else {
//            break;
//        }
//    }
//    L->data[s] = ele;
//}
//
//void CreateHeap(struct SqList* L, int len) {
//    for (int i = 2; i <= len; i++) {
//        AdjustHeap(L, i, len);
//    }
//}
//
//int position(struct SqList* L, int x, int len) {
//    for (int i = 1; i <= len; i++) {
//        if (L->data[i] == x) {
//            return i;
//        }
//    }
//    return 0;
//}
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//    struct SqList* L = new struct SqList;
//    for (int i = 1; i <= n; i++) {
//        cin >> L->data[i];
//        CreateHeap(L, i);
//    }
//
//    for (int i = 0; i < m; i++) {
//        int x;
//        cin >> x;
//        string s;
//        cin >> s;
//        if (s == "is") {
//            string ss;
//            cin >> ss;
//            if (ss == "the") {
//                string sss;
//                cin >> sss;
//                if (sss == "root") {//1
//                    if (L->data[i] == x) {
//                        cout << "T" << endl;
//                    }
//                    else {
//                        cout << "F" << endl;
//                    }
//                }
//                else {//3
//                    string s1;
//                    int y;
//                    cin >> s1 >> y;
//                    if (position(L, x, n) == position(L, y, n) / 2) {
//                        cout << "T" << endl;
//                    }
//                    else {
//                        cout << "F" << endl;
//                    }
//                }
//            }
//            else {//4
//                string s1, s2;
//                int y;
//                cin >> s1 >> s2 >> y;
//                if (position(L, x, n) / 2 == position(L, y, n)) {
//                    cout << "T" << endl;
//                }
//                else {
//                    cout << "F" << endl;
//                }
//            }
//        }
//        else {//2
//            int y; string s1, s2;
//            cin >> y >> s1 >> s2;
//            if (position(L, x, n) / 2 == position(L, y, n) / 2) {
//                cout << "T" << endl;
//            }
//            else {
//                cout << "F" << endl;
//            }
//        }
//    }
//
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

//struct SqList {
//    int data[1002];
//};
//
//void AdjustHeap(struct SqList* L, int s) {
//    int ele = L->data[s];
//    for (int j = s / 2; j > 0; j /= 2) {
//        if (j > 0 && L->data[j] > ele) {
//            L->data[s] = L->data[j];
//            s = j;
//        }
//        else {
//            break;
//        }
//    }
//    L->data[s] = ele;
//}

// void CreateHeap(struct SqList* L, int len) {
//     for (int i = 2; i <= len; i++) {
//         AdjustHeap(L, i, len);
//     }
// }

int position(int* data,int x, int len) {
    for (int i = 1; i <= len; i++) {
        if (data[i] == x) {
            return i;
        }
    }
    return 0;
}

int main() {

    int n, m;
    int data[1002];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> data[i];
        int j = i;
        while (j > 1 && data[j] < data[j / 2]) {
            int temp = data[j];
            data[j] = data[j / 2];
            data[j / 2] = temp;
            j /= 2;
        }
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        if (s == "is") {
            string ss;
            cin >> ss;
            if (ss == "the") {
                string sss;
                cin >> sss;
                if (sss == "root") {//1
                    if (data[1] == x) {
                        cout << "T" << endl;
                    }
                    else {
                        cout << "F" << endl;
                    }
                }
                else {//3
                    string s1;
                    int y;
                    cin >> s1 >> y;
                    if (position(data,x, n) == position(data,y, n) / 2) {
                        cout << "T" << endl;
                    }
                    else {
                        cout << "F" << endl;
                    }
                }
            }
            else {//4
                string s1, s2;
                int y;
                cin >> s1 >> s2 >> y;
                if (position(data,x, n) / 2 == position(data,y, n)) {
                    cout << "T" << endl;
                }
                else {
                    cout << "F" << endl;
                }
            }
        }
        else {//2
            int y; string s1, s2;
            cin >> y >> s1 >> s2;
            if (position(data,x, n) / 2 == position(data,y, n) / 2) {
                cout << "T" << endl;
            }
            else {
                cout << "F" << endl;
            }
        }
    }

    return 0;
}