//Stacks using linked lists//
#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *link;
} * top;

void push()
{
    int n;
    stack *node;
    node = new stack;
    if (node == NULL)
    {
        cout << "no space avail/n";
    }
    cout << "enter data\n";
    cin >> n;
    node->data = n;
    node->link = NULL;
    if (top == NULL)
        top = node;
    else
    {
        node->link = top;
        top = node;
    }
}

int pop()
{
    stack *temp;
    int value;
    if (top == NULL)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        temp = top;
        value = temp->data;
        top = top->link;
        delete temp;

        return value;
    }
}

void display()
{
    stack *temp;
    temp = top;
    if (temp == NULL)
        cout << "Stack Underflow";
    else
    {
        cout << "\nElements in stack are: \n";
        while (temp != NULL)
        {

            cout << temp->data << endl;
            temp = temp->link;
        }
    }
}

int main()
{

    top = NULL;
    int ch, value;
    while (1)
    {
        cout << "\n-------------\n";
        cout << "\nPress 1 for Push\n";
        cout << "Press 2 for Pop\n";
        cout << "Press 3 for Display\n";
        cout << "Press any key to exit\n";
        cout << "\nenter choice: \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            value = pop();
            if (value != 0)
                cout << "\nPopped element is " << value;
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}