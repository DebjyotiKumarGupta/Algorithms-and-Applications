#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if ((n == 2) || (n == 3))
    {
        return 1;
    }
    if ((n % 2 == 0) || (n % 3 == 0))
    {
        return 0;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
        {
            return 0;
        }
    }
    return 1;
}
void isfactornaive(int n)
{
     if (n <= 1)
    {
       cout<<n<<" ";
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}
void isfactorefficient(int n)
{
    if (n <= 1)
    {
       cout<<n<<" ";
    }
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
    {
       cout<<n<<" ";
    }
}
void isprimefcatoroptimized(int n)
{
    if (n <= 1)
    {
        cout<<n<<" ";
    }
        while (n % 2 == 0)
    {
        cout << "2" << " ";
        n = n / 2;
    }

        while (n % 3 == 0)
    {
        cout << "3" << " ";
        n = n / 3;
    }
    
    for (int i = 5; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while ((n % (i + 2)) == 0)
        {
            cout << (i + 2) << " ";
            n /= (i+2);
        }
    }
    if(n>3){
        cout<< n <<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    isprimefcatoroptimized(n);
    cout<<endl;
    isfactorefficient(n);
    cout<<endl;
    isfactornaive(n);
    cout<<endl;
    
    

    return 0;
}