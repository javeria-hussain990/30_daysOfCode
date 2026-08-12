#include <iostream>
using namespace std;

int main()
{
    int revArr[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 6; i >= 0; i--)
    {
        cout << revArr[i] << " on index " << i << endl;
    }
    return 0;
}