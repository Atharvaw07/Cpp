// C++ Program to check whether an integer entered by the user is odd or even

#include<iostream>
using namespace std;


int main(){
    
    int num;

    cout<<"Entered a Number:";
    cin>>num;

    if(num%2==0){
        cout<<"Num is even";

    }
    else{
        cout<<"Num is odd";
    }
return 0;

}   