#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {5, 6, 7};
    cout << arr << endl;
    cout << *(arr) << endl;

    cout << (arr + 1) << endl;
    cout << *(arr + 1) << endl;

    cout << (arr + 2) << endl;
    cout << *(arr + 2) << endl;

    cout << &(arr[0]) << endl;
    cout << &(arr[1]) << endl;
    cout << &(arr[2]) << endl;

    return 0;
}