// C++ Program to convert celcius to farenheit.
#include<iostream>
using namespace std;


int main(){
    double cel,farn;

    cout<<"Enter temp in celcius: ";
    cin>>cel;

    farn=(cel*1.8 )+32;

    cout<<"Temp in Farenheit is "<<farn;
return 0;

}