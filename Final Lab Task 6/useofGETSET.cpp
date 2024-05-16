#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string name;
    int roll=0;
    int phn=0;
    string address;
public:
    void setName (string n){
    name = n;
    }
    void setRoll (int r){
    roll = r;
    }
    void setPhn (int p){
    phn = p;
    }
    void setAddress (string a){
    address = a;
    }

    string getName(){
    return name;
    }
    int getRoll(){
    return roll;
    }
    int getPhn(){
    return phn;
    }
    string getAddress(){
    return address;
    }};
int main()
{
    Student sam;
    sam.setName("Sam");
    sam.setRoll(123);
    sam.setPhn('01799999999');
    sam.setAddress("123 Uttar Badda, Dhaka");

    Student john;
    john.setName("John");
    john.setRoll(456);
    john.setPhn('01888899999');
    john.setAddress("456, Middle Badda, Dhaka");

    cout<< "Name: "<<sam.getName() <<endl;
    cout<< "Roll: "<<sam.getRoll() <<endl;
    cout<< "Phone-Number: "<<sam.getPhn() <<endl;
    cout<< "Address: "<<sam.getAddress() <<endl<<endl;

    cout<< "Name: "<<john.getName() <<endl;
    cout<< "Roll: "<<john.getRoll() <<endl;
    cout<< "Phone-Number: "<<john.getPhn() <<endl;
    cout<< "Address: "<<john.getAddress() <<endl<<endl;

return 0;
}
