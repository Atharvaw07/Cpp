// C++ Program to Count Total Notes in an Amount

#include <iostream>
using namespace std;

int main()
{
    int amount;

    int n500, n200, n100, n50, n20, n10, c5, c2, c1;
    n500 = n200 = n100 = n50 = n20 = n10 = c5 = c2 = c1 = 0;

    cout << "Enter Amount:";
    cin >> amount;

    if (amount >= 500)
    {
        n500 = amount / 500;
        amount = amount - (n500 * 500);
    }
    if (amount >= 200)
    {
        n200 = amount / 200;
        amount = amount - (n200 * 200);
    }
    if (amount >= 100)
    {
        n100 = amount / 100;
        amount = amount - (n100 * 100);
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        amount = amount - (n50 * 50);
    }
    if (amount >= 20)
    {
        n20 = amount / 20;
        amount = amount - (n20 * 20);
    }
    if (amount >= 10)
    {
        n10 = amount / 10;
        amount = amount - (n10 * 10);
    }
    if (amount >= 5)
    {
        c5 = amount / 5;
        amount = amount - (c5 * 5);
    }
    if (amount >= 2)
    {
        c2 = amount / 2;
        amount = amount - (c2 * 2);
    }
    if (amount >= 1)
    {
        c1 = amount;
    }

    cout<<"Notes of 500 = "<<n500<<endl;
    cout<<"Notes of 200 = "<<n200<<endl;
    cout<<"Notes of 100 = "<<n100<<endl;
    cout<<"Notes of 50 = "<<n50<<endl;
    cout<<"Notes of 20 = "<<n20<<endl;
    cout<<"Notes of 10 = "<<n10<<endl;
    cout<<"Coins of 5 = "<<c5<<endl;
    cout<<"Coins of 2 = "<<c2<<endl;
    cout<<"Coins of 1 = "<<c1<<endl;





    return 0;
}