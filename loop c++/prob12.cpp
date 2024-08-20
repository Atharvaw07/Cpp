// Write C++ program to reverse a number using while & for loop

#include<iostream>

using namespace std;


int main(){

    int num,rev=0;

    cout<<"Enter a number:";
    cin>>num;

    //while loop
    // while ((num>0))
    // {
    //     /* code */
    //     rev=rev*10;
    //     rev=rev+ (num%10);
    //     num=num/10;
    // }
    
    // cout<<"Reverse number with while loop is "<<rev;

    // for loop
    for (rev = 0; num>0; num=num/10)
    {
        /* code */
        rev=rev*10;
        rev=rev+num%10;

    }
    cout<<"Reverse number with for loop is "<<rev;

    
return 0;

}