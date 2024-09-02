#include <iostream>
using namespace std;

void acceptArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int getMax(int arr[], int size)
{
    if (size == 0)
        return 0;

    int max = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int getMin(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}

void displayArr(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << "\t" << arr[i];
}

int getIndexOf(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }

    return -1;
}

void countAddEven(int arr[], int size, int &odd, int &even)
{
    // reseting size to zero;
    odd = 0;
    even = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
}

int main(int argc, char *argv[])
{
    int size;
    cout << "Enter the array size\t";
    cin >> size;

    int *arr = new int[size];

    // 1.
    acceptArr(arr, size);
    // 2.
    displayArr(arr, size);

    // 3.
    cout << endl
         << "The max element among the array is: \t" << getMax(arr, size);

    cout << endl
         << "The min element among the array is: \t" << getMin(arr, size);

    int target;
    cout << endl
         << "Enter the element you want to search for: ";
    cin >> target;

    int index = getIndexOf(arr, size, target);
    if (index == -1)
    {
        cout << endl
             << "The element" << target << "is not present inside array ";
    }
    else
    {
        cout << endl
             << "The " << target << " is present at index: \t " << index;
    }

    // 5.
    int odd, even;
    countAddEven(arr, size, odd, even);
    cout << endl
         << "The count of odd elements in array is : \t" << odd;
    cout << endl
         << "The count of even elements in array is : \t" << even;

    return 0;
}