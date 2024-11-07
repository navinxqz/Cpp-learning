#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

bool keyWord(const string &word)
{   //if character is keyword
     return (word == "int" || word == "float" || word == "double" || word == "char" ||
            word == "if" || word == "else" || word == "while" || word == "for" ||
            word == "return" || word == "void" || word == "break" || word == "continue" ||
            word == "switch" || word == "case" || word == "default" ||
            word == "class" || word == "public" || word == "private" ||
            word == "protected" || word == "static" || word == "const");
}

bool operators(char c)
{   //if operator
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' ||
            c == '=' || c == '&' || c == '|' || c == '^' || c == '!' ||
            c == '<' || c == '>' || c == '?');
}
bool isIdentifierChar(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || (c == '_');
}
bool delimeters(char c){ return(c== ';' || c==',' || c=='(' || c==')' || c=='{' || c=='}' || c=='[' || c==']'); }

bool isInteger(const string &n) {
    for (int i = 0; i < n.length(); ++i) {
        if (!isdigit(n[i])) return false; // Not a digit
    }
    return !n.empty();
}

bool realNum(const string &n)
{
    bool hasDecimal = false;
    for (int i = 0; i < n.length(); ++i) {
        if (n[i] == '.') {
            if (hasDecimal){ return false; } // More than one decimal point
            hasDecimal = true;
        } else if (!isdigit(n[i])){
            return false; // Not a digit
        }
    }return !n.empty();
}

void TokenDetector(const string &dir) {
    ifstream file(dir);
    if (!file) {
        cerr << "Error Opening file: " << dir << endl;
        return;
    }
    string t;
    char c;

    while(file.get(c)){
        if (c == ' ' || c == '\n' || c == '\t') {
            if (!t.empty()) {
                if (keyWord(t)) {
                    cout << t << " - Keyword" << endl;
                }else if (isInteger(t)) {
                    cout << t << " - Integer" << endl;
                }else if (realNum(t)) {
                    cout << t << " - Real Number" << endl;
                }else if (isIdentifierChar(t[0])) {
                    cout << t << " - Identifier" << endl;
                }else {
                    cout << t << " - Invalid Identifier" << endl;
                }
                t.clear();
            }continue;
        }

        if (operators(c)) {
            if (!t.empty()) {
                if(keyWord(t)) {
                    cout << t << " - Keyword" << endl;
                }else if(isInteger(t)) {
                    cout << t << " - Integer" << endl;
                }else if(realNum(t)) {
                    cout << t << " - Real Number" << endl;
                }else if(isIdentifierChar(t[0])) {
                    cout << t << " - Identifier" << endl;
                }else{
                    cout << t << " - Invalid Identifier" << endl;
                }t.clear();
            }
            cout << c << " - Operator" << endl;
            continue;
        }

        if(delimeters(c)) {
            if (!t.empty()) {
                if(keyWord(t)) {
                    cout << t << " - Keyword" << endl;
                }else if(isInteger(t)) {
                    cout << t << " - Integer" << endl;
                }else if(realNum(t)) {
                    cout << t << " - Real Number" << endl;
                }else if(isIdentifierChar(t[0])) {
                    cout << t << " - Identifier" << endl;
                }else{
                    cout << t << " - Invalid Identifier" << endl;
                }t.clear();
            }
            cout << c << " - Delimiter" << endl;
            continue;
        }t += c;
    }

    if (!t.empty()) {
        if(keyWord(t)) {
            cout << t << " - Keyword" << endl;
        }else if (isInteger(t)) {
            cout << t << " - Integer" << endl;}
        else if (realNum(t)){ cout << t << " - Real Number" << endl; }
        else if (isIdentifierChar(t[0])){ cout << t << " - Identifier" << endl;}
        else{ cout << t << " - Invalid Identifier" << endl; }
    }file.close();
}

int main()
{
    string file;
    cout<<"Filename: ";
    cin>>file;
    TokenDetector(file);
    return 0;
}
