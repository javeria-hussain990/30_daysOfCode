#include <iostream>
using namespace std;

int main()
{
    int markss[5] = {88, 98, 90, 85, 79};
    // cout<<sizeof(marks)/sizeof(int)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << markss[i] << endl;
    }

    int size = 5;
    int marks[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter marks" << endl;
        cin >> marks[i];
    }
    for (int j = 0; j < size; j++)
    {
        cout << marks[j] << endl;
    }

    return 0;
}
