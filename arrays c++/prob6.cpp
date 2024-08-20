// Write C++ program to find maximum and minimum element in array

#include<iostream>
#define MAX_SIZE 100

using namespace std;


int main(){

    int arr[MAX_SIZE];
    int num,even=0,odd=0,i;

    cout<<"Enter size of array:";
    cin>>num;

    cout<<"Enter elements in array:";
    for (int i = 0; i < num; i++)
    {
            cin>>arr[i];
    }

    int max,min;

    max=arr[0];
    min=arr[0];

    for (int i = 0; i < num; i++)
    {
        /* code */
        if(arr[i]>max){
            max=arr[i];

        }

        if(arr[i]<min){
            min=arr[i];
            
        }
    }

    cout<<"The Minimum Number is "<<min<<endl;
    cout<<"The Maximum Number is "<<max<<endl;

    







return 0;
}