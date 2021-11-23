//Stacks using array//
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <process.h>

using namespace std;

#define SIZE 5
class stk
{
    int stack[SIZE];
    int top;

public:
    int push();
    int pop();
    void display();
    stk()
    {

        top = -1;
    }
};

int stk::push()
{
    int item;
    if (top == SIZE - 1)
    {
        cout << "Stack is Full\n";
    }
    else
    {
        cout << "Enter element to push: \n";
        cin >> item;
        top = top + 1;
        stack[top] = item;
    }
}
int stk::pop()
{
    int temp;
    if (top == -1)
    {
        cout << "Empty Stack\n";
    }
    else
    {
        temp = stack[top];
        top = top - 1;
        cout << "----successful----" << endl;
        cout << "popped element is " << temp << endl;
    }
}

void stk::display()
{
    if (top == -1)
        cout << "stack empty\n";
    else
    {
        cout << "Elements are:\n";
        for (int i = top; i >= 0; i--)
        {

            cout << stack[i] << endl;
        }
    }
    cout << endl;
}

int main()
{

    int option = 0;
    stk s;
    int element;

    while (1)
    {
        cout << "---------------------------------\n";
        cout << "enter 1 to push:\nenter 2 for pop:\n";
        cout << "enter 3 for display:\nenter any number to exit\n";
        cout << "---------------------------------\n";

        cout << "Enter option: \n";
        cin >> option;

        switch (option)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        default:
            exit(0);
        }
    }

    getch();
    return 0;
}