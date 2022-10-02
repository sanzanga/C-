////#include <iostream>
////#include <stack>
////#include <queue>
////#include <vector>
////
////using namespace  std;
////
////int n, m, k;
////queue<int> q;//推送器
////stack<int> s;//盒子
////void solve() {
////    while (1) {
////        vector<int> v;
////        bool flag = 0;
////        while (1) {
////            if (v.empty()) {//松枝是空的
////                if (!s.empty()) {//盒子不是空的
////                    v.push_back(s.top());//直接放
////                    s.pop();
////                }
////                else if (!q.empty()) {//盒子是空的，推送器不是
////                    v.push_back(q.front());
////                    q.pop();
////                }
////                else {//否则都是空的,推送器是空的
////                    break;
////                }
////            }
////            else {//松枝不是空的
////                if (!s.empty() && s.top() <= v.back()) {//盒子不是空的，且栈顶满足要求
////                    v.push_back(s.top());
////                    s.pop();
////                }
////                else {//栈顶不满足要求
////                    while (!q.empty() && s.size() <= m) {//找出满足要求的放到松枝上的数
////                        auto t = q.front();
////                        if (t <= v.back()) {//找到了
////                            q.pop();
////                            v.push_back(t);
////                            break;
////                        }
////                        else {
////                            if (s.size() == m) {//满了
////                                flag = 1;
////                                break;
////                            }
////                            else {//不满足，放到栈顶去
////                                s.push(t);
////                                q.pop();
////                            }
////                        }
////                    }
////                    if (q.empty() && (s.empty() || s.top() > v.back())) {//如果推送器空了但是栈顶放不了，或者推送器空了盒子也是空的。对应pta情况2
////                        break;
////                    }
////                }
////            }
////            if (flag || v.size() == k) {//如果盒子满了 或者松枝插满了
////                break;
////            }
////        }
////        //输出
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
//        if (hz.size() && hz.top() <= d) //小盒子最上面符合条件,插入松针  
//        {
//            st.push_back(hz.top());
//            hz.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && a.front() <= d) //推送器最上面符合条件,插入松针 
//        {
//            st.push_back(a.front());
//            a.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && (int)hz.size() < m) //不能直接插入松针,推送器放入小盒子
//        {
//            hz.push(a.front());
//            a.pop();
//        }
//        else //小盒子满了,推送器也不能插入,开启一个新的松针
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
//queue<int> q;//推送器
//stack<int> s;//盒子
//void solve() {
//    while (1) {
//        vector<int> v;
//        bool flag = 0;
//        while (1) {
//            if (v.empty()) {//松枝是空的
//                if (!s.empty()) {//盒子不是空的
//                    v.push_back(s.top());//直接放
//                    s.pop();
//                }
//                else if (!q.empty()) {//盒子是空的，推送器不是
//                    v.push_back(q.front());
//                    q.pop();
//                }
//                else {//否则都是空的,推送器是空的
//                    break;
//                }
//            }
//            else {//松枝不是空的
//                if (!s.empty() && s.top() <= v.back()) {//盒子不是空的，且栈顶满足要求
//                    v.push_back(s.top());
//                    s.pop();
//                }
//                else {//栈顶不满足要求
//                    while (!q.empty() && s.size() <= m) {//找出满足要求的放到松枝上的数
//                        auto t = q.front();
//                        if (t <= v.back()) {//找到了
//                            q.pop();
//                            v.push_back(t);
//                            break;
//                        }
//                        else {
//                            if (s.size() == m) {//满了
//                                flag = 1;
//                                break;
//                            }
//                            else {//不满足，放到栈顶去
//                                s.push(t);
//                                q.pop();
//                            }
//                        }
//                    }
//                    if (q.empty() && (s.empty() || s.top() > v.back())) {//如果推送器空了但是栈顶放不了，或者推送器空了盒子也是空的。对应pta情况2
//                        break;
//                    }
//                }
//            }
//            if (flag || v.size() == k) {//如果盒子满了 或者松枝插满了
//                break;
//            }
//        }
//        //输出
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
//        if (hz.size() && hz.top() <= d) //小盒子最上面符合条件,插入松针  
//        {
//            st.push_back(hz.top());
//            hz.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && a.front() <= d) //推送器最上面符合条件,插入松针 
//        {
//            st.push_back(a.front());
//            a.pop();
//            if ((int)st.size() == k)
//            {
//                ans.push_back(st);
//                st.clear();
//            }
//        }
//        else if (a.size() && (int)hz.size() < m) //不能直接插入松针,推送器放入小盒子
//        {
//            hz.push(a.front());
//            a.pop();
//        }
//        else //小盒子满了,推送器也不能插入,开启一个新的松针
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