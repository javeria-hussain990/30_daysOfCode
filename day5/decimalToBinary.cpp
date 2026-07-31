#include <iostream>
using namespace std;

int decToBin(int decNum)
{
    int answer = 0;
    int power = 1;
    while (decNum > 0)
    {

        int remainder = decNum % 2;
        decNum = decNum / 2;
        answer = answer + (remainder * power);
        power = power * 10;
    }
    return answer;
}

int main()
{
    // cout << decToBin(6) << endl;
    // cout << decToBin(18);

    for (int i = 1; i <= 10; i++)
    {
        cout << decToBin(i);
        cout << endl;
    }

    return 0;
}