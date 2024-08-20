// Write C++ program to read and print elements of array

#include<iostream>
#define MAX_SIZE 100
using namespace std;


int main(){

    int arr[MAX_SIZE];
    int num,i;

    cout<<"Enter the size of array:";
    cin>>num;

    cout<<"Enter Elements in array:";
    for (int i = 0; i < num; i++)
    {
        /* code */
        cin>>arr[i];

    }

    cout<<"The Elements in the arrays are"<<endl;
    for (int i = 0; i < num; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
return 0;

}