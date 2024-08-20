// Write C++ program to count total number of negative elements in array
#include<iostream>
#define MAX_SIZE 100

using namespace std;


int main(){

    int arr[MAX_SIZE];
    int num,i,count=0;

    cout<<"Enter size in array:";
    cin>>num;

    cout<<"Enter elements in array:";
    for (int i = 0; i < num; i++)
    {
        /* code */
        cin>>arr[i];
    }

    cout<<"The negative number in the arrays are:"<<endl;

    // for ( i = 0; i < num; i++)
    // {
    //     /* code */
    //     if(arr[i]<0){
    //         cout<<arr[i];
    //     }
    // }
for (int i = 0; i < num; i++)
{
    /* code */


    if (arr[i]<0)
    {
        /* code */
        count++;
    }
}
    
        cout<<"The count of negative number is "<<count;
    
    
  
    
return 0;

}