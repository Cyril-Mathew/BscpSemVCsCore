//Linear search//
#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int A[50], num, flag = 0, sizeOfArray, i;
    cout << "\nLINEAR SEARCH" << endl;
    cout << "\nEnter size of the array(<50): ";
    cin >> sizeOfArray;
    cout << "Enter elements of an array :\n";
    for (i = 0; i < sizeOfArray; i++)
        cin >> A[i];
    cout << "Enter number to be searched in array : ";
    cin >> num;
    for (i = 0; i < sizeOfArray; i++)
    {
        if (num == A[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << num << " is not present in array ";
    else
        if(i+1==1)
            cout << num << " is present in array at " << i + 1 << "st position";
        else if(i+1==2)
            cout << num << " is present in array at " << i + 1 << "nd position";
        else if (i+1==3)
            cout << num << " is present in array at " << i + 1 << "rd position";
        else
            cout << num << " is present in array at " << i + 1 << "th position";
    getch();
    return 0;
}