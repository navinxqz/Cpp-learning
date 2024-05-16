#include <iostream>
using namespace std;

struct person{
int id;
string name;
float cgpa;
string grade;
};

int main(){
int flag=0;
    person p[5];
    for(int i=0;i<5;i++){
    cout<<"input name for p"<<i<<": ";
    getline(cin,p[i].name);
    cout<<"input id for p"<<i<<": ";
    cin>>p[i].id;
    cout<<"input cgpa for p"<<i<<": ";
    cin>>p[i].cgpa;
    cin.ignore();
    cout<<endl;
    if(p[i].cgpa>=3.50){
        flag++;
    }
    }
    cout<<"num of student grade >= 3.50: "<<flag<<endl<<endl;
    for(int i=0;i<5;i++){
        if(p[i].cgpa>=3.90){
            p[i].grade="A+";
        }else if(p[i].cgpa>=3.50 && p[i].cgpa<3.90){
        p[i].grade="A";
        }else if(p[i].cgpa>=3.25 && p[i].cgpa<3.50){
        p[i].grade="A-";
        }else if(p[i].cgpa>=3.60 && p[i].cgpa<3.70){
        p[i].grade="B+";
        }else if(p[i].cgpa>=3.00 && p[i].cgpa<3.60){
        p[i].grade="B";
        }else if(p[i].cgpa>=2.75 && p[i].cgpa<3.00){
        p[i].grade="B-";
        }else if(p[i].cgpa>=2.50 && p[i].cgpa<2.75){
        p[i].grade="C";
        }else {
        p[i].grade="F";
        }
        cout<<"Grade for p"<<i<<" : "<<p[i].cgpa<<"  => "<<p[i].grade<<endl;
    }

return 0;
}
