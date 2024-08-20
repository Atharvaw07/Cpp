// Write C++ program to check whether a number is Armstrong number or not


#include<iostream>
using namespace std;


int main(){

    int num,i,r,sum=0;

    cout<<"Enter a Number:";
    cin>>num;

    for(i=num;i>0;i=i/10){
        r=i%10;
        sum=sum+r*r*r;
    }
     if ( num == sum ){
       cout<<num<<" is an armstrong number."<<endl;;
     }
    else{
        cout<<num<<" is not an armstrong number."<<endl;;
    }
return 0;

}