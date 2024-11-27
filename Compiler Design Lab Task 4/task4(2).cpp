#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidMathExpression(const string& expression)
 {
    int n = expression.length();
    int parenthesisBalance = 0;
    bool lastWasOperator = true;

    for (int i = 0; i < n; ++i){
        char ch = expression[i];

        if (isdigit(ch)){ lastWasOperator = false; }
        else if (ch == '(') {
            parenthesisBalance++;
            lastWasOperator = true;
        }
        else if (ch == ')'){
            parenthesisBalance--;
            if (parenthesisBalance < 0) {
                return false;
            }lastWasOperator = false;
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch=='='){
            if (lastWasOperator){
                return false;
            }lastWasOperator = true;
        }
        else if (!isspace(ch)){ return false; }
    }return parenthesisBalance == 0 && !lastWasOperator;
}

int main(){
    string expression;
    cout << "Enter a mathematical expression: ";
    getline(cin, expression);

    if (isValidMathExpression(expression)){ cout << "The expression is valid." << endl;
    }else{ cout << "The expression is invalid." << endl; }
    return 0;
}
