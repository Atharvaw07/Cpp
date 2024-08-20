// Write C++ program to print all natural numbers in reverse order

#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
if (num>0){
    cout<<"The natural number in reversed order is:"<<endl;
    for(int i =num;i>=0;i--){
        cout<<i<<" ";
    }

}
else{
    cout<<"Enter a positve number...";
}

return 0;

}