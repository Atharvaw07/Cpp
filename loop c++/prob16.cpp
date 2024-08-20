// Write C++ program to find Armstrong numbers between 1 to n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the value of n:";
      cin >>n;

    for (int i = 1; i <= n; i++) {
        int num = i, sum = 0, temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}
