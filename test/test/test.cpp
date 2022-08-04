//#include<iostream>
//#include<string>
//
//using namespace std;
//int main(void) {
//    string l1, l2;
//
//    getline(cin, l1);
//    getline(cin, l2);
//
//    for (;;)
//    {
//        if (l1.find(l2) == l1.npos)
//            break;
//        else
//        {
//            int a = l1.find(l2);
//            l1.erase(a, l2.size());
//        }
//    }
//
//    cout << l1;
//
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//    string str[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> str[i];
//    }
//
//    for (int i = 0; i < m - 1; i++)
//    {
//        int min = i;
//        for (int j = i + 1; j < n - 1; j++)
//        {
//            if (str[j] < str[i])
//            {
//                min = j;
//            }
//        }
//        if (i != min)
//        {
//            string temp = str[i];
//            str[i] = str[min];
//            str[min] = temp;
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << str[i] << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n, m;
//    cin >> n >> m;
//    string str[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> str[i];
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (str[j] > str[j + 1])
//            {
//                string temp = str[j];
//                str[j] = str[j + 1];
//                str[j + 1] = temp;
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << str[i] << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//
//    string str;
//    int n;
//    cin >> str;
//    cin >> n;
//
//    for (int i = n - 1; i < str.size(); i++)
//    {
//        cout << str[i];
//    }
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        cout << str[i];
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//
//    string str;
//    int n;
//    getline(cin, str);
//    scanf("%d", &n);
//
//    n = n % str.size();
//
//    for (int i = n; i < str.size(); i++)
//    {
//        cout << str[i];
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << str[i];
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//
//    string str;
//    getline(cin, str);
//    string s[500000];
//    int count = 0;
//    bool flag = false;
//    int len = sizeof(str) / sizeof(str[0]);
//
//    for (int i = 0; i < len; i++)
//    {
//        if (str[i] != ' ')
//        {
//            if (flag)
//            {
//                count++;
//            }
//            flag = false;
//            s[count] += str[i];
//        }
//        else
//        {
//            flag = true;
//            continue;
//        }
//    }
//
//    for (int i = count - 1; i >= 0; i--)
//    {
//        if (i == 0)
//        {
//            cout << s[i] << endl;
//        }
//        else
//        {
//            cout << s[i] << " ";
//        }
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//
//    string str = "";
//    getline(cin, str);
//    string s[5000];
//    int count = 0;
//    bool flag = false;
//
//    for (int i = 0; i < str.size(); i++)
//    {
//        if (str[i] != ' ')
//        {
//            if (flag)
//            {
//                count++;
//            }
//            flag = false;
//            s[count] += str[i];
//        }
//        else
//        {
//            flag = true;
//            continue;
//        }
//    }
//
//    for (int i = count; i >= 0; i--)
//    {
//        if (i == 0)
//        {
//            cout << s[i] << endl;
//        }
//        else
//        {
//            cout << s[i] << " ";
//        }
//    }
//
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//int main() {
//    //获取整个字符串
//    string str;
//    getline(cin, str);
//    stack<string> st;       //存储字符串的栈
//    string temp = "";
//    for (int i = 0; i < str.size(); i++) {
//        if (str[i] == '\n') {       //读完跳出
//            break;
//        }
//        if (str[i] != ' ') {        //若当前字符不为空格，则并入字符串
//            temp += str[i];
//        }
//        else {                  //若当前为空格，则说明读取一个单词完毕，入栈
//            st.push(temp);      //若栈顶为空格，则空格出栈
//            if (st.top() == "") {
//                st.pop();
//            }
//            temp = "";        //初始化字符串
//        }
//    }
//    st.push(temp);      //由于最后是 '\n'  未能及时进栈，所以最后一个单词在此进栈
//    if (st.top() == "") {   //若最后一个单词也为空格，则出栈
//        st.pop();
//    }
//    int k = st.size();
//    int i = 0;
//    while (!st.empty()) {     //控制输出格式
//        if (i == k - 1) {
//            cout << st.top();
//            st.pop();
//        }
//        else {
//            if (st.top() == "") {
//                st.pop();
//            }
//            cout << st.top() << " ";
//            st.pop();
//        }
//        i++;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b, c, d;
//    scanf("%d/%d %d/%d", &a, &b, &c, &d);
//    int fenmu, fenzi;
//    int num;
//    bool flag = false;
//
//    if (b != d)
//    {
//        b = b * d;
//        a = a * d;
//        d = d * b;
//        c = c * b;
//        fenmu = b;
//        fenzi = a + c;
//    }
//    else
//    {
//        fenmu = b;
//        fenzi = a + c;
//    }
//
//    int min = fenzi < fenmu ? : fenmu;
//
//    for (int i = 2; i <= min; i++)
//    {
//        if (fenzi % 1 == 0 && fenmu % i == 0)
//        {
//            flag = true;
//            num = i;
//        }
//    }
//
//    cout << (fenzi / num) << "/" << (fenmu / num) << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b, c, d;
//    scanf_s("%d/%d %d/%d", &a, &b, &c, &d);
//    int fenmu, fenzi;
//    int num;
//    bool flag = false;
//
//    if (b != d)
//    {
//        b = b * d;
//        a = a * d;
//        c = c * b / d;
//        d = b;
//        fenmu = b;
//        fenzi = a + c;
//    }
//    else
//    {
//        fenmu = b;
//        fenzi = a + c;
//    }
//
//    int min = fenzi < fenmu ? fenzi : fenmu;
//
//    for (int i = 2; i <= min; i++)
//    {
//        if (fenzi % 1 == 0 && fenmu % i == 0)
//        {
//            flag = true;
//            num = i;
//        }
//    }
//
//    cout << (fenzi / num) << "/" << (fenmu / num) << endl;
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int a, b, c, d;// 1 3 1 5
//    scanf("%d/%d %d/%d", &a, &b, &c, &d);
//    int fenmu, fenzi;
//    int num;
//    bool flag = false;
//
//    if (b != d)
//    {
//        b = b * d;//15
//        a = a * d;//5
//        c = c * b / d;//3
//        d = b;//15
//        fenmu = b;//15
//        fenzi = a + c;//8
//    }
//    else
//    {
//        fenmu = b;
//        fenzi = a + c;
//    }
//
//    int min = fenzi < fenmu ? fenzi : fenmu;//8
//
//    for (int i = 2; i <= min; i++)
//    {
//        if (fenzi % i == 0 && fenmu % i == 0)
//        {
//            flag = true;
//            num = i;
//        }
//    }
//
//
//    if (flag)
//    {
//        if (fenzi % fenmu != 0)
//        {
//            cout << (fenzi / num) << "/" << (fenmu / num) << endl;
//        }
//        else
//        {
//            cout << (fenzi / fenmu) << endl;
//        }
//    }
//    else
//    {
//        cout << fenzi << "/" << fenmu << endl;
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//
//    int n;
//    string str = "";
//    scanf_s("%d", &n);
//    string name[10];
//    string age[10];
//    string sex[10];
//    string tele1[10];
//    string tele2[10];
//    int num = 0;
//
//    for (int i = 0; i <= n; i++)
//    {
//        num = 0;
//        getline(cin, str);
//        for (int j = 0; j < str.size(); j++)
//        {
//            if (str[j] != ' ' && num == 0)
//            {
//                name[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 1)
//            {
//                age[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 2)
//            {
//                sex[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 3)
//            {
//                tele1[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 4)
//            {
//                tele2[i] += str[j];
//            }
//            else
//            {
//                num++;
//                continue;
//            }
//        }
//    }
//
//    int m;
//    scanf_s("%d", &m);
//    for (int i = 0; i < m; i++)
//    {
//        int num1 = 1;
//        scanf_s("%d", &num1);
//        if (num1 >= n)
//        {
//            cout << "Not Found" << endl;
//        }
//        else
//        {
//            cout << name[num1+1] << " " << tele1[num1+1] << " " << tele2[num1+1] << " " <<
//                sex[num1+1] << " " << age[num1+1] << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() {
//
//    int n;
//    string str = "";
//    cin >> n;
//    string name[10];
//    string age[10];
//    string sex[10];
//    string tele1[10];
//    string tele2[10];
//    int num = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        getline(cin, str);
//        for (int j = 0; j < str.size(); j++)
//        {
//            if (str[j] != ' ' && num == 0)
//            {
//                name[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 1)
//            {
//                age[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 2)
//            {
//                sex[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 3)
//            {
//                tele1[i] += str[j];
//            }
//            else if (str[j] != ' ' && num == 4)
//            {
//                tele2[i] += str[j];
//            }
//            else
//            {
//                num++;
//                continue;
//            }
//        }
//    }
//
//    int m;
//    cin >> m;
//    for (int i = 0; i < m; i++)
//    {
//        int num1;
//        cin >> num1;
//        if (num1 >= n)
//        {
//            cout << "Not Found" << endl;
//        }
//        else
//        {
//            cout << name[num1] << " " << tele1[num1] << " " << tele2[num1] << " " <<
//                sex[num1] << " " << age[num1] << endl;
//        }
//    }
//
//    system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	string name[10], birth[10], sex[10], tel[10], phone[10];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name[i] >> birth[i] >> sex[i] >> tel[i] >> phone[i];
//	}
//	int K;
//	cin >> K;
//	for (int i = 0; i < K; i++)
//	{
//		int a;
//		cin >> a;
//		if (a >= 0 && a < n)
//		{
//			cout << name[a] << " " << tel[a] << " " << phone[a] << " " << sex[a] << " " << birth[a] << endl;
//		}
//		else
//			cout << "Not Found" << endl;
//	}
//}


//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//
//	system("pause");
//	return 0;
//}