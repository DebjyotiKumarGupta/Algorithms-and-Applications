#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            return res;
        }
        res--;
    }
    return res;
}
int gcdefficient(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int gcdoptimized(int a, int b){
    if(b==0){
        return 1;
    }
    return gcdefficient(b, a%b);
}

int main()
{
    int a, b, res, rev, rev1;
    cout << "Enter any two numbers" << endl;
    cin >> a >> b;
    res = gcd(a, b);
    rev = gcdefficient(a, b);

    cout << res << endl;
    cout << rev << endl;
    cout << rev1 << endl;
    return 0;
}