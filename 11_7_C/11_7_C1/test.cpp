#include <iostream>
using namespace std;
const int MAX = 1002;
int a[MAX];
int n, m;
int find(int x) {//�ҵ��ڵ�λ�ã��������±�
    for (int i = 1; i <= n; i++) {
        if (a[i] == x) return i;
    }
    return 0;
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {//����С����
        cin >> a[i];
        int k = i;
        while (k > 1 && a[k] < a[k / 2]) {
            swap(a[k], a[k / 2]);
            k /= 2;
        }
    }
    while (m--) {//�������жϸ����������ϸ��һ�¾ͺã��ܺ����
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
                    if (a[1] == x) cout << "T" << endl;//a[1]���Ǹ��������ǲ������
                    else cout << "F" << endl;
                }
                else {
                    string s1;
                    int xx;
                    cin >> s1 >> xx;
                    if (find(x) == find(xx) / 2) cout << "T" << endl;//���׵��±���ڶ��ӵ��±���Զ�
                    else cout << "F" << endl;
                }
            }
            else if (ss == "a") {
                string s1, s2;
                int xx;
                cin >> s1 >> s2 >> xx;
                if (find(x) / 2 == find(xx)) cout << "T" << endl;//���ӵ��±���Զ����ڸ��׵��±�
                else cout << "F" << endl;
            }
        }
        else if (s == "and") {
            int xx;
            string s1, s2;
            cin >> xx >> s1 >> s2;
            if (find(x) / 2 == find(xx) / 2) cout << "T" << endl;//���׵��±���ڶ��ӵ��±���Զ��������������ӵĸ����Ƿ���ȣ����ж��������ǲ���siblings
            else cout << "F" << endl;
        }
    }
    return 0;
}