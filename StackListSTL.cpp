#include <iostream>
#include <list>
using namespace std;
template <class T>
class LLStack
{
public:
    LLStack() {}
    void clear() { lst.clear(); }
    bool isEmpty() const { return lst.empty(); }
    T &peek() { return lst.back(); }
    T pop()
    {
        T el = lst.back();
        lst.pop_back();
        return el;
    }
    void push(const T &el)
    {
        lst.push_back(el);
    }
    void display()
    {
        list<int>::iterator itr;
        for (itr = lst.begin(); itr != lst.end(); ++itr)
            cout << *itr << " ";
        cout << endl;
    }
    void display1()
    {
        list<int>::iterator itr;
        for (itr = lst.end(); itr != lst.begin(); itr--)
            cout << *itr << " ";
        cout << endl;
    }

private:
    list<T> lst;
};

char matchingBracket(char b1, char b2)
{
    if (b1 == '(' && b2 == ')')
        return true;
    if (b1 == '[' && b2 == ']')
        return true;
    if (b1 == '{' && b2 == '}')
        return true;
    return false;
}

bool delimiterMatching(string str)
{
    LLStack<char> S;
    int i = 0;
    char ch = str[i++];
    while (ch != '\0')
    {
        cout << "Charachter read: " << ch << endl;
        if (ch == '(' || ch == '[' || ch == '{')
            S.push(ch);
        else if (ch == ')' || ch == ']' || ch == '}')
            if (!matchingBracket(S.pop(), ch))
                return false;
        ch = str[i++];
    }
    if (S.isEmpty())
        return true;
    else
        return false;
}

void addLargeNumbers(string num1, string num2)
{
    LLStack<int> S1, S2, S3;
    int i = 0, carry = 0;

    while (num1[i] != '\0')
        S1.push(num1[i++] - '0');
    i = 0;
    while (num2[i] != '\0')
        S2.push(num2[i++] - '0');

    S1.display();
    S2.display();
    int n1 = 0, n2 = 0;
    while (!S1.isEmpty() || !S2.isEmpty())
    {
        n1 = 0, n2 = 0;
        if (!S1.isEmpty())
            n1 = S1.pop();
        if (!S2.isEmpty())
            n2 = S2.pop();
        carry = carry + n1 + n2;
        S3.push(carry % 10);
        carry = carry / 10;
    }
    if (carry != 0)
    {
        S3.push(carry);
        S3.display1();
    }
}

int main()
{
    addLargeNumbers("592", "978");
}

/*
int main() {
    if (delimiterMatching("while (m < (n[8] + o)) { p = 7;  r = 6; }")) 
         cout<< "Valid expression";
    else cout << "Invalid expression";
    return 0;
}
*/

/*int main() 
{
    LLStack<int> S;
    S.push(1); S.push(2); S.push(3); S.push(4);
    cout << S.peek() <<endl;
    S.pop(); S.pop();
    S.display();
}*/
