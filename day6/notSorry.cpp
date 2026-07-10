#include <iostream>
#include <windows.h>
using namespace std;

void color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

class notSorry
{
public:
    notSorry() {}
    void noSorry(int NS)
    {
        int colors[] = {10, 11, 12, 13, 14, 15};

        for (int i = 0; i <= 100000; i++)
        {
            cout << endl; 
            color(colors[i % 6]);
            cout << " =================================================== " << endl
                 << endl;
            // color(7);
                   
                cout << "\"Keep wishing that I will ever say sorry to you😶 \"" << endl;

            cout << "\"always you have to say \"sorry\" to me even if you are right😏 \"" << endl;
        }
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    notSorry ns;
    ns.noSorry(1);
     
    color(14);
    cout << " =================================================== " << endl;
    color(11);
    cout << "....................";

    color(12);
    cout << "understand or not🙄?";

    color(11);
    cout << "................." << endl;

    color(7);

    return 0;
} 