// Write C++ program to find the sum of first and last digit of any number

#include<iostream>
#include <math.h>

using namespace std;


int main(){
    int num,first,last,count=0,sum=0;

    cout<<"Enter a number:";
    cin>>num;

    last=num%10;
    first=num;
    while (num>=10)
    {
        /* code */
        num/=10;
    }

    first=num;
    sum=last+first;
    cout<<"The sum of last and first number is "<<sum;



return 0;

}