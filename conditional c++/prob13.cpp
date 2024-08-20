// C++ program to detrermine a candidate’s age is eligible for casting the vote or not.

#include<iostream>
using namespace std;


int main(){
    int age;

    cout<<"Enter your Age:";
    cin>>age;

    if(age>=18){
        cout<<"Eligible for voting";
    }
    else{
        cout<<"Not Eligible";
    }
return 0;

}