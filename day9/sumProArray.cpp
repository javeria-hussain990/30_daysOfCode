// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int product = 1;
//     int arr[5] = {3, 4, 7, 8, 2};
//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + arr[i];
//         product = product * arr[i];
//     }
//     cout << sum << endl;
//     cout << product;
//     return 0;
// }

#include <iostream>
using namespace std;

int sumArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int proArr(int arr[], int size)
{

    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        product = product * arr[i];
    }
    return product;
}

int main()
{
    int size=5;
    int arr[5] = {3, 4, 5, 7, 2};
    cout << sumArr(arr, size) << endl;
    cout << proArr(arr, size );

    return 0;
}
