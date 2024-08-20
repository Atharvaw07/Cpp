// Write a C++ program to check whether a number is palindrome or not

#include <iostream>
using namespace std;

int main()
{
    int num, i, rev;

    cout << "Enter a Number:";
    cin >> num;

    rev = num;
    for (i = 0; num > 0; num = num / 10)
    {
        i = i * 10;
        i = i + (num % 10);
    }

    if (rev == i)
        cout << rev << " is a Palindrome Number.";
    else
        cout << rev << " is not a Palindrome Number.";

    return 0;
}