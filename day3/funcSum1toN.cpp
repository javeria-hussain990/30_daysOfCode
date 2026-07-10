#include <iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int sum;
    sum = sumN(5);
    cout << sum;
    return 0;
}