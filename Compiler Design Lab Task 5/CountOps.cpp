#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;

bool keyWord(const string &word)
{   //if its a keyword
     return (word=="int" || word=="float" || word=="double" || word=="char" || word=="if" || word=="else" || word=="while" || word=="for" ||
            word=="return" || word=="void" || word=="break" || word=="continue" || word=="switch" || word=="case" || word=="default" ||
            word=="class" || word=="public" || word=="private" || word=="protected" || word=="static" || word=="const");
}
bool dataTypes(const string &word)
{   //if its a datatype
     return (word=="int" || word=="float" || word=="double" || word=="char");
}

void TokenDetector(const string &dir){
    ifstream file(dir);
    if(!file){
        cerr << "Error Opening file: "<<dir<<endl;
        return;
    }
    string t;
    char c;
    int keywordCount = 0;
    int dataTypeCount = 0;

    while(file.get(c)){
        if (c == ' ' || c == '\n' || c == '\t' || c == ';' || c == '(' || c == ')' || c == '{' || c == '}') {
            if (!t.empty()) {
                if (keyWord(t)) {
                    keywordCount++;
                }
                if (dataTypes(t)) {
                    dataTypeCount++;
                }
                t.clear();
            }
        } else {
            t += c;
        }
    }
    // Check the last token
    if (!t.empty()) {
        if (keyWord(t)) {
            keywordCount++;
        }
        if (dataTypes(t)) {
            dataTypeCount++;
        }
    }

    std::cout<<"Total Keywords: "<<keywordCount<<std::endl;
    std::cout<<"Total Data Types: "<<dataTypeCount<<std::endl;
}

int main()
{
    string file;
    std::cout<<"Filename: ";
    cin>>file;
    TokenDetector(file);
    return 0;
}