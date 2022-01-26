#include <iostream>
#include <stack>
using namespace std;
int evalPostfix(string exp)
{
    stack<int> stack;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] >= '0' && exp[i] <= '9')
        {
            stack.push(exp[i] - '0');
        }
        else
        {
            int x = stack.top();
            stack.pop();

            int y = stack.top();
            stack.pop();
            if (exp[i] == '+')
            {
                stack.push(y + x);
            }
            else if (exp[i] == '-')
            {
                stack.push(y - x);
            }
            else if (exp[i] == '*')
            {
                stack.push(y * x);
            }
            else if (exp[i] == '/')
            {
                stack.push(y / x);
            }
        }
    }
    return stack.top();
}

int main()
{
    string exp = "46+2/5*7+";

    cout << evalPostfix(exp);

    return 0;
}