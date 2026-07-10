#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "enter a number" << endl;
    cin >> n;
    for (int count = 1; count <= n; count++)
    {

        sum = sum + count;
    }
    cout << "sum of numbers you enterd is: " << sum;
    return 0;
}