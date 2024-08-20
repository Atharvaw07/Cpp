// Write C++ program to find HCF of two numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, min, HCF = 1;

    cout << "Enter Num1 and Num2:";
    cin >> num1 >> num2;

    min = num1 > num2 ? num1 : num2;

    for (int i = 1; i <= min; i++)
    {
        /* code */
        if(num1%i==0 && num2%i==0){
            HCF=i;
        }
    }
     cout<<"HCF of "<<num1<< " and "<< num2<< " is: " <<HCF;
    return 0;

    return 0;
}