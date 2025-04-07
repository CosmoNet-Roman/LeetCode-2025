#include <stack>
#include <string>
#include <iostream>

using namespace std;

bool isValid(string s) {
    stack<char> stack;

    for(auto& c : s) {
        if(c == '(' || c == '[' || c == '{') {

            stack.push(c);

        } else {

            if(stack.empty() || (c == ')' && stack.top() != '(') || (c == '}' && stack.top() != '{') || (c == ']' && stack.top() != '[')) {
                return false;
            }
            
            stack.pop();
        }
    }

    return (stack.empty());
}

int main() {
    string case1 = "()";
    string case2 = "()[]{}";
    string case3 = "(]";
    string case4 = "([])";
    string case5 = "[";

    cout << "Case: ()     = " << isValid(case1) << endl;
    cout << "Case: ()[]{} = " << isValid(case2) << endl;
    cout << "Case: (]     = " << isValid(case3) << endl;
    cout << "Case: ([])   = " << isValid(case4) << endl;
    cout << "Case: [      = " << isValid(case5) << endl;
}