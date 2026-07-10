#include <iostream>
using namespace std;

int sumOfDigit(int num)
{
    int digSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        digSum = digSum + lastDigit;
    }
    return digSum;
}

int main()
{
    cout << "sum of digits is :"<<sumOfDigit(145)<<endl;
    cout<<"sum of digits is : "<<sumOfDigit(1654);
    return 0;
}