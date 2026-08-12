#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size = 5;
    int arr[] = {2, 3, 4, 8, 5};
    int target = 8;
    cout << target << " is on index " << linearSearch(arr, size, target);
    return 0;
}