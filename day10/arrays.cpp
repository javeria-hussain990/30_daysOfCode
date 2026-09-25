#include <iostream>
using namespace std;

// int main()
// {
//     int x = 5;
//     int *ptr = &x;
//     cout << x << endl;
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     cout << &x;
// }

// int x = 10;
// int *p = &x;
// *p = 25;
// cout << x;

// int x = 5;
// int y = 10;
// int *p = &x;
// p = &y;
// cout << *p;

// int arr[] = {10, 20, 30};
// int *p = arr;
// cout << *(p + 1);

// int a = 3, b = 7;
// int *p = &a;
// int *q = &b;
// *p = *q;
// cout << a << ' ' << b;

// int arr[5] = {1, 2, 3, 4, 5};
// cout << arr[2] + arr[4];

// int a[] = {10, 20, 30, 40, 50};
// cout << a[2] + a[4];

// int arr[4] = {5, 10, 15, 20};
// int *p = arr;
// p = p + 2;
// cout << *p;

// struct Point
// {
//     int x, y;
// };
// int main()
// {
//     Point p = {3, 7};
//     cout << p.x + p.y;
// }

// struct Student
// {
//     int age=20;

// };
// int main()
// {
//     Student s;
//     // int age=20;

//     cout << s.age;
// }

class Number
{
public:
    int x;
    Number(int a) { x = a; }
};
int main()
{
    Number n1(10);
    Number n2(20);
    n2.x = n1.x + 5;
    cout << n2.x;
}

