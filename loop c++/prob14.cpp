// Write C++ program to find factorial of any number

#include<iostream>
using namespace std;



int main(){
  long long num,fac=1,i=1;
    cout<<"Enter a number:";
    cin>>num;

    // // while loop
    // while(i<=num){
    //     fac=fac*i;
    //     i++;
    // }


    //for loop
    for(i=1;i<=num;i++){
        fac=fac*i;

    }

    cout<<"Factorial of "<<num<<" is "<<fac;


return 0;

}