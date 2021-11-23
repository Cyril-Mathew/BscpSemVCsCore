//program to get and print array of objects.
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    char name[100];
    int roll,age;
    public:
    void input()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll : ";
        cin>>roll;
        cout<<"Enter age : ";
        cin>>age;
    }
    void output()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    student s[3];
    int i;
    cout<<"Enter student's info"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"Student "<<i+1<<endl;
        s[i].input();
    }
    cout<<endl<<"Displaying student's info"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"Student "<<i+1<<endl;
        s[i].output();
    }
getch();
return 0;
}