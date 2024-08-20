// Write C++ program to count even and odd elements in an array


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

    for (int i = 0; i < num; i++)
    {
        /* code */
        if(arr[i]%2==0){

            even++;
        }
        else{
            odd++;
        }
    }

    cout<<"There are "<<even<<" even and "<<odd<<" odd elements in the array";
    
    
return 0;

}