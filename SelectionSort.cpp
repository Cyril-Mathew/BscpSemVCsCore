//Selection sort//
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void selSort(int A[], int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
            {
                if(A[i]>A[j])
                {
                    temp=A[j];
                    A[j]=A[i];
                    A[i]=temp;
                }
            }   
    }
}
int main()
{
    int A[50],i,j,sizeOfArray;
    cout<<"\nSelection sort"<<endl;
    cout<<"\nEnter size of the array(<50): ";
    cin>>sizeOfArray;
    cout<<"\nEnter elements of an array: ";
    for(i=0;i<sizeOfArray;i++)
        cin>>A[i];
    cout<<"\nOriginal array:";
    for(i=0;i<sizeOfArray;i++)
        cout<<" "<<A[i];
    selSort(A,sizeOfArray);
    cout<<"\nSorted array using selection sort:";
    for(i=0;i<sizeOfArray;i++)
        cout<<" "<<A[i];
    getch();
    return 0;
}