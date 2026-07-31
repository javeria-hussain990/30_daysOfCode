#include <iostream>
using namespace std;

int binToDec(int binNum)
{
    int ans = 0;
    int power = 1;
    while (binNum > 0)
    {
        int remainder = binNum % 10;
        ans = ans + (remainder * power);
        binNum /= 10;
        power *= 2;
    }
    return ans;
}

int main()
{
    cout << binToDec(101) << endl;
    cout << binToDec(1010);

    return 0;
}