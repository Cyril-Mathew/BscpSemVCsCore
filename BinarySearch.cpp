//Binary search//
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int A[10], num, flag = 0, sizeOfArray;
    cout << "\nEnter size of the array(<50): ";
    cin >> sizeOfArray;
    cout << "\nEnter elements of an array in ascending order : \n";
    for (int i = 0; i < sizeOfArray; i++)
        cin >> A[i];
    cout << "\nEnter number to be searched in array : ";
    cin >> num;
    int lBound = 0;
    int uBound = sizeOfArray - 1;
    int mid = (lBound + uBound) / 2;
    while (lBound <= uBound)
    {
        if (num > A[mid])
            lBound = mid + 1;
        else if (num < A[mid])
            uBound = mid - 1;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << num << " is not present in array";
    else if (mid + 1 == 1)
        cout << num << " is present in array at " << mid + 1 << "st position";
    else if (mid + 1 == 2)
        cout << num << " is present in array at " << mid + 1 << "nd position";
    else if (mid + 1 == 3)
        cout << num << " is present in array at " << mid + 1 << "rd position";
    else
        cout << num << " is present in array at " << mid + 1 << "th position";
    getch();
    return 0;
}