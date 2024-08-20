// Write C++ program to merge two sorted array

#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], mergeaArr[100];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;

    cout << "Enter size of array1:";
    cin >> size1;

    cout << "Enter the elements in the array:";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of array2:";
    cin >> size2;

    cout << "Enter the elements in the array:";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    mergeSize = size1 + size2;

    index1 = 0;
    index2 = 0;
    for (mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++)
    {

        if (index1 >= size1 || index2 >= size2)
        {
            break;
        }

        if (arr1[index1] < arr2[index2])
        {
            mergeaArr[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeaArr[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    while (index1 < size1)
    {
        mergeaArr[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }

    while (index2 < size1)
    {
        mergeaArr[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }

cout<<"The Array merged in ascending order :";
for (int i = 0; i < mergeSize; i++)
{
    /* code */
    cout<<mergeaArr[i]<<" ";
}

   

    return 0;
}
