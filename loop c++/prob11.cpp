// Write C++ program to calculate product of digits of a number

#include<iostream>
using namespace std;


int main(){
    int num,product=1;

    cout<<"Enter a number:";
    cin>>num;

    while (num!=0)
    {
        product=product*(num%10);
        num=num/10;

    }

    cout<<"Product:"<<product;

    
return 0;

}