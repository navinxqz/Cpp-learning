#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidFunctionDeclaration(const string& line) {
    int parenIndex = -1;
    int spaceIndex = -1;

    for (int i = 0; i < line.length(); i++){
        if (line[i] == '('){
            parenIndex = i;
            break;
        }
    }if (parenIndex == -1){ return false; }

    for (int i = 0; i < parenIndex; ++i){
        if (line[i] == ' '){
            spaceIndex = i;
            break;
        }
    }
    if (spaceIndex == -1 || spaceIndex>parenIndex){ return false; }
    if (line[line.length() - 1] != ';'){ return false; }

    string returnType = line.substr(0, spaceIndex);
    string validReturnTypes[] = {"int", "float", "double", "char", "bool", "void"};

    bool validReturnType = false;
    for(int i = 0; i < 6; ++i){
        if(returnType == validReturnTypes[i]){
            validReturnType = true;
            break;
        }
    }if(!validReturnType){ return false; }

    int nameStart = spaceIndex + 1;
    int nameEnd = parenIndex;
    if (nameStart >= nameEnd){ return false; }

    string functionName = line.substr(nameStart, nameEnd - nameStart);
    if(functionName.empty() || (!isalpha(functionName[0]) && functionName[0] != '_')){ return false; }

    for(int i = 0; i < functionName.length(); ++i) {
        if (!isalnum(functionName[i]) && functionName[i] != '_'){ return false; }
    }return true;
}

bool isValidFunctionDefinition(const string& line) {
    int braceIndex = -1;
    int parenIndex = -1;
    for (int i = 0; i < line.length(); ++i) {
        if (line[i] == '(') {
            parenIndex = i;
            break;
        }
    }
    for (int i = 0; i < line.length(); ++i) {
        if (line[i] == '{') {
            braceIndex = i;
            break;
        }
    }

    if (parenIndex == -1 || braceIndex == -1){ return false; }
    if (parenIndex<braceIndex){ return true; }
    return false;
}

int main(){
    string line;
    while (getline(cin, line)) {
        if(isValidFunctionDeclaration(line)){
            cout << "Valid function declaration"<< endl;
        }else if (isValidFunctionDefinition(line)){
            cout << "Valid function definition"<< endl;
        }else{
            cout << "Invalid syntax" << endl;
        }
    }return 0;
}
