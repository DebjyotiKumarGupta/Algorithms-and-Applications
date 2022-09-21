#include <bits/stdc++.h>
using namespace std;
int priority(char c)
{
    if (c == '^' && c == '%')
    {
        return 4;
    }
    if (c == '/' && c == '*')
    {
        return 3;
    }
    if (c == '+' && c == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
int main()
{
    stack<char> s;
    string s1;
    cout << "Enter any string" << endl;
    cin >> s1;
    for (int i = 0; i <= s1.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            cout << s1[i];
        }
        else if (s1[i] == '(')
        {
            s.push(s1[i]);
        }
        else if (s1[i] == ')')
        {
            while (s.top() != '(')
            {
                cout << s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            if (s.empty() == true)
            {
                s.push(s1[i]);
            }
            else if (priority(s1[i]) > priority(s.top()))
            {
                s.push(s1[i]);
            }
            else
            {
                while (priority(s1[i]) <= priority(s.top()) || s.empty() == false)
                {
                    cout << s.top();
                    s.pop();
                }
                s.push(s1[i]);
            }
        }
    }

    while (s.size() != 0)
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}