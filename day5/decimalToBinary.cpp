#include <iostream>
using namespace std;

int decimalToBinary(int decNum)
{
    int answer = 0;
    int power = 1; // 10^0  10^1  10^2...

    while (decNum > 0)
    {

        int remainder = decNum % 2;
        decNum = decNum / 2;
        answer = answer + (remainder * power);
        power = power * 10;
    }
    return answer;
};
int main()
{

    cout << decimalToBinary(6) << endl;

// for (int i = 1; i <= 10; i++)
// {
//     cout << decimalToBinary(i) << endl;
// }
return 0;
}