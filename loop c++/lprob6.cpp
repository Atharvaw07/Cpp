// Write C++ program to find sum of even numbers between 1 to n

#include<iostream>
using namespace std;


int main(){
    int num,sum=0;

    cout<<"Enter a Number:";
    cin>>num;

    for(int i=2;i<=num;i+=2){
        // cout<<i <<" ";
        sum+=i;
        
    }
    cout<<"The sum of natural number is "<<sum;
return 0;

}