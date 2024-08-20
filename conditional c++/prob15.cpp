// C++ program to calculate the total marks, percentage and division of student.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int rollno, p, m, c, total;
    float per;
    char name[20], div[10];

    cout << "Enter you Roll No:";
    cin >> rollno;

    cout << "Enter you Name:";
    cin >> name;

    cout << "Enter your three subjects marks:";
    cin >> p >> m >> c;

    total = p + m + c;
    per = (total / 3);

    if (per >= 60)
        strcpy(div, "First");

    else if (per < 60 && per >= 48)
        strcpy(div, "Second");

    else if (per < 48 && per >= 36)
        strcpy(div, "Pass");
    else
        strcpy(div, "Fail");

    cout<<"Roll No."<<rollno<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Marks in Pyhsics:"<<p<<endl;
    cout<<"Marks in Maths:"<<m<<endl;
    cout<<"Marks in Chemistry:"<<c<<endl;
    cout<<"Total="<<total<<endl;
    cout<<"Percentage="<<per<<"%"<<endl;
    cout<<"Division:"<<div;

    return 0;
}