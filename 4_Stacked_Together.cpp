// CodeDuet 2k23 Round 3

// This code is implementation of stack using linked list
// Debug this code and find the errors and correct them

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
public:
    Node *top;
    void display();
    void push();
    void pop();
    void peek();
};

// To display the values present in stack or display "Empty Stack" if stack is empty
void Stack ::display()
{
    if (top == NULL)
    {
        cout << "Empty Stack\n";
    }
    else
    {
        Node *p = top;

        while (p)
        {
            cout << p->data << "\n";
            p = p->next;
        }
    }
}

// Push values in the stack
void Stack ::push()
{
    Node *p  = new Node();

  
        cout << "Enter data: ";
        cin >> p->data;
        p->next = top;
        top = p;
        display();
    
}

// Pop values in the stack
void Stack::pop()
{
    if (top == NULL)
        cout << "Stack Underflow\n";
    else
    {
        Node *p = top;
        top = top->next;
        delete p;
        display();
    }
}

// peek values at particular index in the stack
void Stack::peek()
{
    if (top == NULL)
        cout << "Empty Stack\n";
    else
    {
        cout << "Enter index: ";
        int x;
        cin >> x;
        Node *p = top;
        for (int i = 1; p && i <= x; i++, p = p->next)
        {
            if (i == x)
                cout << p->data << endl;
        }
    }
}

int main()
{
    Stack s1;
    while (1)
    {
        cout << "MENU: \n1.display\n2.push\n3.pop\n4.peek\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.display();
            break;
        case 2:
            s1.push();
            break;
        case 3:
            s1.pop();
            break;
        case 4:
            s1.peek();
            break;
        default:
            return 0;
        }
    }
    return 0;
}
