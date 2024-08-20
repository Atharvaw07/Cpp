// Write C++ program to print sum of digits enter by user

#include <iostream>
using namespace std;
 
int main()
{
    int num, total;
 
   //Reading number
    cout<<"Enter any number: "<<endl;
    cin>>num;
 
    //Adding sum of digit in total variable
    for(total = 0; num > 0; num = num/10)
        total = total + (num%10);
 
    //Printing sum of digit
    cout<<"Sum of digits: "<< total;
    return 0;
}