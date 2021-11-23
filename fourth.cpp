//program to display 3D array
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[10][10][10],d1,d2,d3,i,j,k;
    cout<<"Enter size of three dimensions: ";
    cin>>d1>>d2>>d3;
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<d1;i++)
        for(j=0;j<d2;j++)
            for(k=0;k<d3;k++)
            {
                cout<<"a["<<i<<"]["<<j<<"]["<<k<<"] = ";
                cin>>arr[i][j][k];
            }
    cout<<"Displaying elements of array"<<endl;

    for(i=0;i<d1;i++)
        for(j=0;j<d2;j++)
            for(k=0;k<d3;k++)
                cout<<"a["<<i<<"]["<<j<<"]["<<k<<"] = "<<arr[i][j][k]<<endl;
    getch();
    return 0;
}