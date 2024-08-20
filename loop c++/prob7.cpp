// Write C++ program to find sum of odd numbers between 1 to n

#include<iostream>
using namespace std;


int main(){
    int num,sum=0;

    cout<<"Enter a number:";
    cin>>num;

    for(int i =1;i<=num;i+=2){
        sum+=i;
    }

    cout<<"sum of odd numbers between 1 to "<<num<<" is "<<sum;

return 0;

}