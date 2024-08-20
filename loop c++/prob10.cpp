// Write C++ program to find first and last digit of any number

#include<iostream>
using namespace std;


int main(){
    int num,last,first;

    cout<<"Enter a number:";
    cin>>num;

    last=num%10;
    first=num;

    while ((num>=10))
    {
        /* code */
        num=num/10;
    }
    first = num;

    cout<<"Last number:"<<last<<endl;
    cout<<"First number:"<<first<<endl;
    
return 0;

}