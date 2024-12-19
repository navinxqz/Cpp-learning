#include <iostream>
#include <regex>
#include <string>
using namespace std;

void patternCheck(string str, string pattern) {
    try {
        regex reg(pattern);
        if (regex_match(str, reg)) {
            cout << "String matches the pattern: " << pattern << endl;
        } else {
            cout << "String does not match the pattern: " << pattern << endl;
        }
    } catch (const regex_error& e) {
        cout << "Invalid regex pattern: " << pattern << endl;
    }
}
int main(){
    string in;
    cout<<"Input string: ";
    cin>>in;

    patternCheck(in, "abc");
    patternCheck(in, "abc*");
    patternCheck(in, "abc+");
    patternCheck(in, "a(bc)+");
    patternCheck(in, "a(bc)?");
    patternCheck(in, "[abc]");
    patternCheck(in, "[a-z]");
    patternCheck(in, "[a\\-z]");
    patternCheck(in, "-az");
    patternCheck(in, "A-Za-z0-9]+");
    patternCheck(in, "[ \\t\\n]+");
    patternCheck(in, "[^ab]");
    patternCheck(in, "[a\\^b]");
    patternCheck(in, "[a|b]");
    patternCheck(in, "a|b");

    return 0;
}