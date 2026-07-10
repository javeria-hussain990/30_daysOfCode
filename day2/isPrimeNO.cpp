#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "enter a number " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isPrime = false;
        break;
    }
    if (isPrime == true)
    {
        cout << "number is prime";
    }
    else
    {
        cout << "not a prime number";
    }
    return 0; 
}