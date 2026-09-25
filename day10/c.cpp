#include <iostream>
using namespace std;

int main()
{
    string n = "pakistan";
    cout << n[0] << endl;
    cout << n[1] << endl;
    cout << n[2] << endl;
    cout << n[3] << endl;
    cout << n[4] << endl;
    cout << n[5] << endl;
    cout << n[6] << endl;
    cout << n[7] << endl;
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << n[i] << endl;
    }

    cout << endl;
    char arr[8] = {'p', 'a', 'k', 'i', 's', 't', 'a', 'n'};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl;
    cout << arr[6] << endl;
    cout << arr[7] << endl;

    cout << endl;
    for (int j = 0; j < 8; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}