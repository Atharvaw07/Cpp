// Write C++ program to insert an element in array


#include<iostream>
#define MAX_SIZE 100
using namespace std;

int main(){
 int arr[MAX_SIZE];
    int size,even=0,odd=0,i;

    cout<<"Enter size of array:";
    cin>>size;

    cout<<"Enter elements in array:";
    for (int i = 0; i < size; i++)
    {
            cin>>arr[i];
    }

    int num,position;

    cout<<"Enter the number to insert:";
    cin>>num;

    cout<<"Enter the position to insert:";
    cin>>position;

    if (position<=0 || position>size+1)
    {
        /* code */
        cout<<"Invalid position! Please enter position between 1 to "<<num;
    }

    else{

      //Inserting element in an array & increasing the size of the array
 
        for(i=size; i>=position; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[position-1] = num;
        size++;
 
         // Printing new array with new element
 
        cout<<"Array elements after insertion : ";
        for(i=0; i<size; i++)
        {
           cout<<arr[i]<<"\t";
        }
    }
return 0;
}