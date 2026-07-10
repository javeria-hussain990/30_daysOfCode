#include <iostream>
using namespace std;

int binToDecimal(int binNum)
{
    int answer = 0;
    int power = 1;
    while (binNum > 0)
    {
        int remainder = binNum % 10;
        binNum = binNum / 10;
        answer = answer + (remainder * power);
        power = power * 2;
    }
    return answer;
}

int main()
{
    cout << binToDecimal(101);
    return 0;
}