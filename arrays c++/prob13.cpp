// Write C++ program count total duplicate elements in an array

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size, count=0;
    int i, j;

    cout << "Enter the size of array:";
    cin >> size;

    cout << "Enter the elements in array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout << "\nTotal number of duplicate elements found in array: " << count;

    return 0;


}