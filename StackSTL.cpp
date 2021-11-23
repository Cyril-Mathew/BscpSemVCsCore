#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(26);
    stack.push(28);
    stack.push(29);
    stack.push(30);

        stack.pop();

    while (!stack.empty())
    {
        cout << ' ' << stack.top();
        stack.pop();
    }
}
