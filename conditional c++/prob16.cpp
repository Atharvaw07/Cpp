// C++ program to enter month number and print number of days in month.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Month Number:";
    cin >> num;

    if (num == 1)
    {
        cout << "Jan-31";
    }
    else if (num == 2)
    {
        cout << "Feb-28 or 29 ";
    }
    else if (num == 3)
    {
        cout << "Mar-31";
    }
    else if (num == 4)
    {
        cout << "Apr-30";
    }
    else if (num == 5)
    {
        cout << "May-31";
    }
    else if (num == 6)
    {
        cout << "Jun-30";
    }
    else if (num == 7)
    {
        cout << "Jul-31";
    }
    else if (num == 8)
    {
        cout << "Aug-31";
    }
    else if (num == 9)
    {
        cout << "Sept-30";
    }
    else if (num == 10)
    {
        cout << "Oct-31";
    }
    else if (num == 11)
    {
        cout << "Nov-30";
    }
    else if (num == 12)
    {
        cout << "Dec-31";
    }
    else
    {
        cout<<"Num is not btw 1-12!!try again...";
    }
    return 0;
}