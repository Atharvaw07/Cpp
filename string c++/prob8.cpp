// Write C++ program to count number of alphabets, digits and special characters in string

#include <iostream>
#include <string.h>

#define MAX_SIZE 100 // Maximum size of the string
using namespace std;

int main()
{
    char string[MAX_SIZE];
    int digits, alphabets, specialchar, i;

    digits = alphabets = specialchar = i = 0;

    cout << "Enter String:";
    cin >> string;

    while ((string[i] != '\0'))
    {
        if ((string[i] >= 'a' && string[i] >= 'z') || (string[i] >= 'A' && string[i] >= 'Z'))
        {
            alphabets++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            digits++;
        }
        else
        {
            specialchar++;
        }
        i++;
    }

    cout << "Total Alphabets: " << alphabets << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special characters: " << specialchar << endl;

    return 0;
}