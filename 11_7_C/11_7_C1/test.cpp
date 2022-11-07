#include <iostream>
using namespace std;
const int MAX = 1002;
int a[MAX];
int n, m;
int find(int x) {//找到节点位置，即数组下标
    for (int i = 1; i <= n; i++) {
        if (a[i] == x) return i;
    }
    return 0;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {//建立小顶堆
        cin >> a[i];
        int k = i;
        while (k > 1 && a[k] < a[k / 2]) {
            swap(a[k], a[k / 2]);
            k /= 2;
        }
    }
    while (m--) {//下面是判断各种情况，仔细看一下就好，很好理解
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
                if (sss == "root") {
                    if (a[1] == x) cout << "T" << endl;//a[1]就是根，看看是不是相等
                    else cout << "F" << endl;
                }
                else {
                    string s1;
                    int xx;
                    cin >> s1 >> xx;
                    if (find(x) == find(xx) / 2) cout << "T" << endl;//父亲的下标等于儿子的下标除以二
                    else cout << "F" << endl;
                }
            }
            else if (ss == "a") {
                string s1, s2;
                int xx;
                cin >> s1 >> s2 >> xx;
                if (find(x) / 2 == find(xx)) cout << "T" << endl;//儿子的下标除以二等于父亲的下标
                else cout << "F" << endl;
            }
        }
        else if (s == "and") {
            int xx;
            string s1, s2;
            cin >> xx >> s1 >> s2;
            if (find(x) / 2 == find(xx) / 2) cout << "T" << endl;//父亲的下标等于儿子的下标除以二，看看两个儿子的父亲是否相等，即判断两个人是不是siblings
            else cout << "F" << endl;
        }
    }
    return 0;
}