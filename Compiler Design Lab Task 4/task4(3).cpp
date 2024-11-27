#include <iostream>
#include <string>
using namespace std;

bool isValidParenthesis(const string &expression) {
    int countp = 0;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if(ch == '('){ countp++; }
        else if (ch == ')'){
            countp--;
            if (countp<0){ return false; }
        }
    } return countp == 0;
}

int main(){
    string expression;
    cout<<"Enter a mathematical expression: ";
    getline(cin, expression);

    if(isValidParenthesis(expression)) {
        cout << "Expression is properly parenthesized." << endl;
    }else {
        cout << "Expression is not properly parenthesized." << endl;
    }return 0;
}
