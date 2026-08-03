#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    while (num > 1 && num % 2 == 0)
    {
        num = num / 2;
    }
    if (num == 1)
    {
        cout << "power of 2" << endl;
    }
    else
    {
        cout << "not power of 2";
    }
    return 0;
}

