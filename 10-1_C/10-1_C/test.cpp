////#include <iostream>
////#include <stack>
////#include <queue>
////#include <vector>
////
////using namespace  std;
////
////int n, m, k;
////queue<int> q;//������
////stack<int> s;//����
////void solve() {
////    while (1) {
////        vector<int> v;
////        bool flag = 0;
////        while (1) {
////            if (v.empty()) {//��֦�ǿյ�
////                if (!s.empty()) {//���Ӳ��ǿյ�
////                    v.push_back(s.top());//ֱ�ӷ�
////                    s.pop();
////                }
////                else if (!q.empty()) {//�����ǿյģ�����������
////                    v.push_back(q.front());
////                    q.pop();
////                }
////                else {//�����ǿյ�,�������ǿյ�
////                    break;
////                }
////            }
////            else {//��֦���ǿյ�
////                if (!s.empty() && s.top() <= v.back()) {//���Ӳ��ǿյģ���ջ������Ҫ��
////                    v.push_back(s.top());
////                    s.pop();
////                }
////                else {//ջ��������Ҫ��
////                    while (!q.empty() && s.size() <= m) {//�ҳ�����Ҫ��ķŵ���֦�ϵ���
////                        auto t = q.front();
////                        if (t <= v.back()) {//�ҵ���
////                            q.pop();
////                            v.push_back(t);
////                            break;
////                        }
////                        else {
////                            if (s.size() == m) {//����
////                                flag = 1;
////                                break;
////                            }
////                            else {//�����㣬�ŵ�ջ��ȥ
////                                s.push(t);
////                                q.pop();
////                            }
////                        }
////                    }
////                    if (q.empty() && (s.empty() || s.top() > v.back())) {//������������˵���ջ���Ų��ˣ��������������˺���Ҳ�ǿյġ���Ӧpta���2
////                        break;
////                    }
////                }
////            }
////            if (flag || v.size() == k) {//����������� ������֦������
////                break;
////            }
////        }
////        //���
////        for (int i = 0; i < v.size(); i++) {
////            if (i != v.size() - 1) {
////                cout << v[i] << ' ';
////            }
////            else {
////                cout << v[i] << endl;
////            }
////        }
////        if (s.empty() && q.empty()) {
////            break;
////        }
////    }
////}
////
////int main()
////{
////
////    cin >> n >> m >> k;
////
////    for (int i = 0; i < n; i++) {
////        int x;
////        cin >> x;
////        q.push(x);
////    }
////
////    solve();
////
////    return 0;
////}
//
//#include<iostream>
//#include<vector>
//#include<stack>
//#include<queue>
//using namespace std;
//vector<vector<int> > ans;
//vector<int> st;
//queue<int> a;
//stack<int> hz;
//int main()
//{
//    int n, m, k; cin >> n >> m >> k;
//    for (int i = 0; i < n; i++)
//    {
//        int x; cin >> x;
//        a.push(x);
//    }
//
//    int d;
//    while (hz.size() || a.size())
//    {
//        if (st.size() != 0) d = st.back();
//        else d = 1e9;
//
//        if (hz.size() && hz.top() <= d) //С�����������������,��������  
//        {
//            st.push_back(hz.top());
//            hz.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && a.front() <= d) //�������������������,�������� 
//        {
//            st.push_back(a.front());
//            a.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && (int)hz.size() < m) //����ֱ�Ӳ�������,����������С����
//        {
//            hz.push(a.front());
//            a.pop();
//        }
//        else //С��������,������Ҳ���ܲ���,����һ���µ�����
//        {
//            ans.push_back(st);
//            st.clear();
//        }
//    }
//
//    if (st.size())
//    {
//        ans.push_back(st);
//        st.clear();
//    }
//
//    for (auto& p : ans)
//    {
//        cout << p[0];
//        for (int i = 1; i < (int)p.size(); i++)
//            cout << " " << p[i];
//        cout << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <stack>
//#include <queue>
//#include <vector>
//
//using namespace  std;
//
//int n, m, k;
//queue<int> q;//������
//stack<int> s;//����
//void solve() {
//    while (1) {
//        vector<int> v;
//        bool flag = 0;
//        while (1) {
//            if (v.empty()) {//��֦�ǿյ�
//                if (!s.empty()) {//���Ӳ��ǿյ�
//                    v.push_back(s.top());//ֱ�ӷ�
//                    s.pop();
//                }
//                else if (!q.empty()) {//�����ǿյģ�����������
//                    v.push_back(q.front());
//                    q.pop();
//                }
//                else {//�����ǿյ�,�������ǿյ�
//                    break;
//                }
//            }
//            else {//��֦���ǿյ�
//                if (!s.empty() && s.top() <= v.back()) {//���Ӳ��ǿյģ���ջ������Ҫ��
//                    v.push_back(s.top());
//                    s.pop();
//                }
//                else {//ջ��������Ҫ��
//                    while (!q.empty() && s.size() <= m) {//�ҳ�����Ҫ��ķŵ���֦�ϵ���
//                        auto t = q.front();
//                        if (t <= v.back()) {//�ҵ���
//                            q.pop();
//                            v.push_back(t);
//                            break;
//                        }
//                        else {
//                            if (s.size() == m) {//����
//                                flag = 1;
//                                break;
//                            }
//                            else {//�����㣬�ŵ�ջ��ȥ
//                                s.push(t);
//                                q.pop();
//                            }
//                        }
//                    }
//                    if (q.empty() && (s.empty() || s.top() > v.back())) {//������������˵���ջ���Ų��ˣ��������������˺���Ҳ�ǿյġ���Ӧpta���2
//                        break;
//                    }
//                }
//            }
//            if (flag || v.size() == k) {//����������� ������֦������
//                break;
//            }
//        }
//        //���
//        for (int i = 0; i < v.size(); i++) {
//            if (i != v.size() - 1) {
//                cout << v[i] << ' ';
//            }
//            else {
//                cout << v[i] << endl;
//            }
//        }
//        if (s.empty() && q.empty()) {
//            break;
//        }
//    }
//}
//
//int main()
//{
//
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < n; i++) {
//        int x;
//        cin >> x;
//        q.push(x);
//    }
//
//    solve();
//
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<stack>
//#include<queue>
//using namespace std;
//vector<vector<int> > ans;
//vector<int> st;
//queue<int> a;
//stack<int> hz;
//int main()
//{
//    int n, m, k; cin >> n >> m >> k;
//    for (int i = 0; i < n; i++)
//    {
//        int x; cin >> x;
//        a.push(x);
//    }
//
//    int d;
//    while (hz.size() || a.size())
//    {
//        if (st.size() != 0) d = st.back();
//        else d = 1e9;
//
//        if (hz.size() && hz.top() <= d) //С�����������������,��������  
//        {
//            st.push_back(hz.top());
//            hz.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && a.front() <= d) //�������������������,�������� 
//        {
//            st.push_back(a.front());
//            a.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && (int)hz.size() < m) //����ֱ�Ӳ�������,����������С����
//        {
//            hz.push(a.front());
//            a.pop();
//        }
//        else //С��������,������Ҳ���ܲ���,����һ���µ�����
//        {
//            ans.push_back(st);
//            st.clear();
//        }
//    }
//
//    if (st.size())
//    {
//        ans.push_back(st);
//        st.clear();
//    }
//
//    for (auto& p : ans)
//    {
//        cout << p[0];
//        for (int i = 1; i < (int)p.size(); i++)
//            cout << " " << p[i];
//        cout << endl;
//    }
//
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

const int N = 100010;

int a[N];
bool flag;
bool st[N];
int n, m, sum, hh, tt, t;

signed main()
{
    cin >> n >> m >> t;
    while (t--)
    {
        stack<int> stk;
        for (int i = 1; i <= n; i++)  scanf("%d", &a[i]);
        int j = 1, now = 1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == now)
            {
                now++;
                while (!stk.empty() && stk.top() == now)
                {
                    stk.pop();
                    now++;
                }
            }
            else
            {
                stk.push(a[i]);
                if (stk.size() > m)
                {
                    j = 0;
                }
            }
        }
        if (j == 0 || stk.size() > 1)  cout << "NO" << endl;
        else  cout << "YES" << endl;
    }
}