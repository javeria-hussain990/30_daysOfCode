#include <iostream>
using namespace std;

string sumFun(int a, int b)
{
    int sum = a + b;
    cout << sum;

    return " function completed";
}

int main()
{
    int a, b;
    cout << "enter num" << endl;
    cin >> a;
    cout << "enter 2nd num" << endl;
    cin >> b;
    // string r =  sumFun(a, b);
    // int sum = a + b;
    cout<<sumFun(a,b);
    // cout << r;

    return 0;
}