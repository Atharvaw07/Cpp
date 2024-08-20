// C++ program to check whether a triangle can be formed by the given value for the angles.

#include<iostream>
using namespace std;


int main(){
    int num1,num2,num3,total;
    
    cout<<"Enter Three Values:";
    cin>>num1>>num2>>num3;

    total=num1+num2+num3;

    if(total<=180){
        cout<<"The values can form a triangle.";
    }
    else{
        cout<<"Cannot form triangle";
    }

return 0;

}