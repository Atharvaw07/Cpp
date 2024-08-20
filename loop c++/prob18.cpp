// Write a C++ program to check a enter number is Prime number or not using while & for loop

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number to check prime of not:";
    cin >> num;

    int f = 0, i = 2;

    // while loop
    // while (i <= num / 2)
    // {
    //     /* code */
    //     if (num % i == 0)
    //     {
    //         f = 1;
    //         break;
    //     }
    //     i++;

    // }


    // for loop

    for(i=2;i<=num/2;i++){
        if (num%i==0)
        {
            /* code */
            f=1;
            break;

        }

        
    }

    if(f==0){
        cout<<num<<" is Prime number";

    }
    else{
        cout<<num<<" Not a prime number";
    }
    return 0;
}