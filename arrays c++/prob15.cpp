// Write C++ program to put even and odd elements of array in two separate array

#include <iostream>
using namespace std;

void printArray(int arr[], int len);

int main()
{
    int arr1[100], odd[100], even[100];
    int size1, evenCount, oddCount;
    int i;

    cout << "Enter the size of the Array1:";
    cin >> size1;

    cout << "Enter the element in Array1:";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    evenCount = 0;
    oddCount = 0;

    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            even[evenCount] = arr1[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr1[i];
            oddCount++;
        }
    }

    cout << "\nElements of even array: ";
    printArray(even, evenCount);

    cout << "\nElements of odd array: ";
    printArray(odd, oddCount);

   
        return 0;
    }

     void printArray(int arr[], int len)
    {
        int i;

        for (i = 0; i < len; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }