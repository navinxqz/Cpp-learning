#include <iostream>
#include <string>
using namespace std;

class Mobile{
private:
    string name;
    string simnum;
    double balance;
    string os;
    bool status;
public:
    //empty
Mobile(){
    name = "";
    simnum= "";
    balance= 0.00;
    os = "";
    status= true;//lock
}
Mobile(string n,string sim,double bal,string mos,bool lock){
    name = n;
    simnum= sim;
    balance= bal;
    os = mos;
    status= lock;
}
~Mobile()
{cout<<"Mobile object destroyed"<<endl;
}
     void setName(string n){
     name = n; }
     string getName(){
     return name; }

     void setSimnum(string sim){
     simnum = sim; }
     string getSimnum (){
     return simnum; }

     void setBalance (double bal){
     balance = bal; }
     double getBalance(){
     return balance; }

     void setOs (string mos){
     os = mos;}
     string getOs(){
     return os; }

     void setStatus (bool lock){
     status = lock; }
     bool getStatus (){
     return status; }

     void showinfo(){
     if(status){
        cout<< "Mobile is locked."<<endl;
     }else{
     cout<< "Mobile Owner Name: "<<name<<endl;
     cout<< "Mobile Number: "<<simnum<<endl;
     cout<< "Mobile Balance: "<<balance<<endl;
     cout<< "Mobile OS Name: "<<os<<endl;
     }}

     void recharge(double taka){
     if (status){
        cout<< "Can't Recharge. Mobile is locked.\n"; }
        else{
            balance +=taka;
            cout<< "Recharge Successful!!!\nNew Balance: "<<balance<< " taka\n";
        }}

    void callsomeone(int time){
    if (status){
       cout<< "Can't call someone. Mobile is locked.\n"; }
        else{
          double cost = 0.5*time;
        if(balance >=cost){
            balance -=cost;
            cout<< "Call cost: "<<cost<< " taka.\nCurrent Balance: "<<balance<<endl;
        }else{
        cout<< "Insufficient balance!!!\n";
        }}
        }};
    int main()
{
    Mobile m1;
    m1.setName("Salman");
    m1.setSimnum("01732112345");
    m1.setBalance(90.55);
    m1.setOs("Android");
    m1.setStatus(false);

    Mobile m2("Khan","01987654321",15.30,"ios",false);

    cout<< "Info for user 1:\n";
    m1.showinfo();
    cout<<endl;

    cout<< "Info for user 2:\n";
    m2.showinfo();
    cout<<endl;

    double taka;
    cout<< "enter amount to recharge mobile 1: ";
    cin>>taka;
    m1.recharge(taka);
    cout<<endl;

    int time;
    cout<< "Duration of your call: ";
    cin>>time;
    m1.callsomeone(time);
    cout<<endl;

    cout<< "if the mobile is locked then the output:\n";
    m1.setStatus(true);
    m1.showinfo();
    m1.recharge(10);
    m1.callsomeone(10);
    cout<<endl;

return 0;
}
