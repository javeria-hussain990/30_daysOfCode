#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int pro(int a, int b)
{
    int d = a * b;
    return d;
}

int main()
{
    cout << sum(2, 3)<<endl;
    cout << pro(3, 4)<<endl;
    return 0;
}