#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number of books in library " << endl;
    cin >> n;

    double *array = new double[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter price for book " << (i + 1) << endl;
        cin >> array[i];
    }

    // calculate average
    float avg = 0.0;

    for (int x = 0; x < n; x++)
    {
        avg = avg + array[x];
    }

    avg = avg / n;

    cout << "average is: " << avg << endl;

    delete[] array;

    return 0;
}