#include <iostream>
using namespace std;

int fact = 1;
int factN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    fact=factN(3);
    cout<<fact;
    return 0;
}