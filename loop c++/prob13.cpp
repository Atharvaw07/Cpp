// Write C++ program to calculate power using while & for loop

#include <iostream>
using namespace std;

int main()
{
    int num, power, expo,i;

    cout << "Enter a number:";
    cin >> num;

    cout << "Enter the Expo:";
    cin >> expo;

    power = 1;

    // int i = 1;

    // while loop
    // while (i <= expo)
    // {
    //     /* code */
    //     power = power * num;
    //     i++;
    // }

    // cout << "Power of " << num << " is " << power;

// for loop

for( i =1;i<=expo;i++){

    power=power*num;
}
cout << "Power of " << num << " is " << power;
    return 0;


}