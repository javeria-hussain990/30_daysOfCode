#include <iostream>
using namespace std;

int main()
{
    int arraySize = 5;
    int size[arraySize];
    for (int i = 0; i < arraySize; i++)

    {
        cout << "enter number " << i + 1 << endl;
        cin >> size[i];
        cout << "you enterd " << size[i] << endl;
    }

    int minVal = size[0];
    int minValueIndex = 0;
    for (int j = 0; j < arraySize; j++)
    {
        if (minVal > size[j])
        {
            minVal = size[j];
            minValueIndex = j;
            
        }

    }
        cout << "smallest number is: " << minVal << " on index :" << minValueIndex << endl;


    return 0;
}
