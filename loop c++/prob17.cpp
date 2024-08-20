// Write a C++ program to calculate compound Interest
// A = P(1 + r/n){nt}
// P = Principal
// r = Annual nominal interest rate as a decimal
// n = Number of compounding periods
// t = Time (in years)

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float amount, rate, time, interest, ci,a;

   cout << "Enter Principal:";
   cin >> amount;
   cout << "Enter Rate of interest:";
   cin >> rate;
   cout << "Enter time in years:";
   cin >> time;

   interest=1+(rate/100);

   ci=1;
   for(a=1;a<=time;a++)
      ci=ci*interest;

   ci=amount*ci-amount;

   cout << "The compund Interest is Rs." << ci << endl;

   return 0;
}