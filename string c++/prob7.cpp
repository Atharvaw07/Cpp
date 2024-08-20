// Write C++ program to reverse a string enter by user

#include <iostream>
#include <string.h>
#define MAX_SIZE 100

using namespace std;

int main()
{
    int i, j, length;
    char string[MAX_SIZE];
    char reverse[MAX_SIZE];

    cout << "Enter a string: ";
    cin >> string;

    length = strlen(string);
    // cout<<"LEnght"<<length;
    j = 0;

    for (i = length - 1; i >= 0; i--)
    {

        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';

    cout << reverse;

    return 0;
}