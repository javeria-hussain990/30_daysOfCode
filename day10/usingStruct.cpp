#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollNo;
    float cgpa;
};

void addStudent(student &s)
{
    cout << "enter name" << endl;
    cin >> s.name;
    cout << "enter roll num" << endl;
    cin >> s.rollNo;
    cout << "enter cgpa" << endl;
    cin >> s.cgpa;
}
void displayAlll(student &s)
{
    cout << "name: " << s.name << endl;
    cout << "rollNo: " << s.rollNo << endl;
    cout << "cgpa: " << s.cgpa << endl;
}
int addFun(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    student s1;
    addStudent(s1);
    displayAlll(s1);

    addFun(3,50);
    

    return 0;
}