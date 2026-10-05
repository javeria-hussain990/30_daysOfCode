#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {4, 2, 1};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    cout << &(arr[0]) << endl;
    cout << &(arr[1]) << endl;

    cout << &(arr[2]) << endl;

    int *ptr0 = &arr[0];
    cout << *ptr0 << endl;

    int *ptr1 = &arr[1];
    cout << *ptr1 << endl;
    
    int *ptr2 = &arr[2];
    cout << *ptr2 << endl;
}