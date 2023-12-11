#include<iostream>
#include<string.h>

using namespace std;

int top = -1;
char stack[50];

void push(char x) {
    top++;
    stack[top] = x;
}

void pop(char t) {
    if (t == '}') {
        if (stack[top] == '{')
            top--;
    } else if (t == ')') {
        if (stack[top] == '(')
            top--;
    } else if (t == ']') {
        if (stack[top] == '[')
            top--;
    }
}

void display() {
    if (top == -1)
        cout << "\nStack is Empty\nGiven expression is well parenthesized.\n";
    else
        cout << "\nStack is not Empty\nGiven expression is not well parenthesized.\n";
}

int main() {
    char exp[50], x, t;
    int len, i;

    cout << "\nEnter your expression: ";
    cin >> exp;
    cout << "\nYour expression is: " << exp;

    len = strlen(exp);

    for (i = 0; i < len; i++) {
        if ((exp[i] == '{') || (exp[i] == '(') || (exp[i] == '[')) {
            x = exp[i];
            push(x);
        } else if ((exp[i] == '}') || (exp[i] == ')') || (exp[i] == ']')) {
            t = exp[i];
            pop(t);
        }
    }

    display();

    return 0;
}

