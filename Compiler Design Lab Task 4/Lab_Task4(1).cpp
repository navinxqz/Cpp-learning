#include<iostream>
#include<string>
using namespace std;


bool endswithfull_stop(const string& sentence) {
    return !sentence.empty() && sentence.back() == '.';
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    if (endswithfull_stop(sentence)) {
        cout << "The sentence is correctly punctuated." << endl;
    } else {
        cout << "The sentence should end with a full-stop." << endl;
    }return 0;
}
