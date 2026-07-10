#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    cout << "enter number" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2!= 0)
        {
            sum = sum + i;
        }
    }
    cout << "sum of odd numbers:  " << sum;
    return 0;
} 