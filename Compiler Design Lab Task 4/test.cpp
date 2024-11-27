#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidVariable(const string& d){
    const char* validType[] = {"int", "float", "double", "char", "bool"};
    bool hasType = false;

int start = 0;
 while(start < d.length() && (d[start] == ' ' || d[start] == '\t')){ start++; }

int end = d.length() - 1;
while(end>=0 && (d[end] == ' ' || d[end] == '\t')){ end--; }

string t = d.substr(start, end - start+1);
if(t[t.length() -1]!=';'){ return false; }

int s = 0;
while(s<t.length() && t[s] != ' '){ s++; }
if(s==0 || s==t.length()){ return false; }

string type = t.substr(0,s);
string variableName = t.substr(s+1, t.length()-s-2);

for(int i=0;i<5;i++){
    if(type == validType[i]){
        hasType = true;
        break;
    }
}if(!hasType){ return false; }

if(variableName.empty() || !isalpha(variableName[0]) && variableName[0] != '_'){ return false; }
for(int i =0; i<variableName.length();i++){
    if (!isalnum(variableName[i]) && variableName[i] != '_') {
            return false;
        }return true;
}
}
int main(){
    string d;
    getline(cin,d);

    if(isValidVariable(d)){
        cout<<"Valid Variable declaration.\n";
    }else{
        cout<<"Invalid variable declaration.\n";
    }return 0;
}
