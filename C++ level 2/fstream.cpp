#include <iostream>
using namespace std;
#include <stack>

bool checkExpression(string exp);
bool arePair(char opening, char closing);

int main()
{
    cout << "Enter the expression: ";
    string expression = "messi";
    cin >> expression;
    cout << '\n' << checkExpression(expression);
}



bool checkExpression(string exp) {
    stack<char> s;
    for (size_t i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            s.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (s.empty())
                return false;
            if (!arePair(s.top(), exp[i]))
                return false;
            s.pop();
        }
        
    }
    return s.empty();
}
bool arePair(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return true;
    if (opening == '{' && closing == '}')
        return true;
    if (opening == '[' && closing == ']')
        return true;
    return false;
}
