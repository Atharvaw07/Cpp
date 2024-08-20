// Write C++ program to sort an array in ascending order

#include <iostream>
using namespace std;

int main()
{
    int arr[100], temp;
    int size, i, j;

    cout << "Enter the size of array:";
    cin >> size;

    cout << "Enter Elements in array:";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Printing the sorted array in ascending order
    cout << "Elements of array in sorted ascending order:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}