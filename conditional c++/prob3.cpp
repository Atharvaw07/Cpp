// C++ Program to Find the Largest Number using Conditional Operator.

#include<iostream>
using namespace std;


int main(){
        int num1,num2,largest;

        cout<<"Enter two number:";
        cin>>num1>>num2;

        largest=(num1>num2) ? num1:num2;

cout<<"largest : "<<largest;

           
return 0;

}