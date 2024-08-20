// C++ Program to convert farenheit to celcius.

#include<iostream>
using namespace std;


int main(){
double cel,farn;

    cout<<"Enter temp in Farenheit: ";
    cin>>farn;

   cel=(farn-32)*5/9;

    cout<<"Temp in celcius is "<<cel;
return 0;

}