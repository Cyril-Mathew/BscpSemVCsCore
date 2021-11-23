#include <iostream>
using namespace std;

void bubbleSort(int a[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }   
        }
    }
    
}
int main()
{
    int A[50],i,j,sizeOfArray;
    cout<<"\nBubble sort"<<endl;
    cout<<"\nEnter size of the array(<50): ";
    cin>>sizeOfArray;
    cout<<"\nEnter elements of an array: ";
    for(i=0;i<sizeOfArray;i++)
        cin>>A[i];
    cout<<"\nOriginal array"<<endl;
    for(i=0;i<sizeOfArray;i++)
        cout<<" "<<A[i];
        cout<<endl;
    bubbleSort(A,sizeOfArray);
    cout<<"\nSorted array using bubble sort"<<endl;
    for(i=0;i<sizeOfArray;i++)
        cout<<" "<<A[i];
    return 0;
}