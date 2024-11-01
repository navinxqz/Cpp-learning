#include <iostream>
#include <string>
using namespace std;

int main()
{
    string in;
    cout<<"Input string: ";
    getline(cin,in);

    int counter = 0;
    char op[] = {'+','-','*','/','=','<','>',':'};
    int n = sizeof(op)/sizeof(op[0]);

    int i=0;
    while(i<in.length()){
        char c = in[i]; //get num

        for(int j=0; j<n; j++)
            {
                if(c == op[j]){
                    counter++;
                    cout<<"Operator"<<counter<<": "<<c<<endl;
                    break;
                }
            }i++;
    }cout<<"Number of operators = "<<counter<<endl;
    return 0;
}
