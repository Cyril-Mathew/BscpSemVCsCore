//program to add ten numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int arr[10],sum=0,i;
cout<<"Enter 10 numbers"<<endl;
for(i=0;i<10;i++)
{
cin>>arr[i];
sum = sum+arr[i];
}
cout<<"Sum = "<<sum;
getch();
return 0;
}