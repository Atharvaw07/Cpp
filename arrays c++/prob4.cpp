// Write C++ program to find sum of all elements of an array

#include<iostream>
#define MAX_SIZE 100
using namespace std;


int main(){
int arr[MAX_SIZE];
    int num,i,sum=0;

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
    
cout<<endl;
    for (int i = 0; i < num; i++)
    {
        /* code */

        sum=sum+arr[i];
    }

    cout<<"The of elements in arrays is "<<sum;
    


return 0;

}