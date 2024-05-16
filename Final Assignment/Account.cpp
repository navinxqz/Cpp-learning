#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
string name;
int accnum;
double balance;
string acctype;
    public:
        Account(){}

        Account( string n, int num, double b, string t){
        name=n;
        accnum=num;
        balance=b;
        acctype=t; }

        ~Account(){}

        void setName(string n){
        name=n; }
        string getName(){
        return name; }

        void setAccnum(int num){
        accnum=num; }
        int getAccnum(){
        return accnum; }

        void setBalance(double b){
        balance=b; }
        double getBalance(){
        return balance; }

        void setAcctype(string t){
        acctype=t; }
        string getAcctype(){
        return acctype; }

    void ShowAccountDetails(){
    cout<< "Account No: "<<accnum<<endl;
    cout<< "Account Owner: "<<name<<endl;
    cout<< "Balance: "<<balance<<" taka"<<endl;
    cout<< "Acc Type: "<<acctype<<endl; }

    void deposit(int d){
    balance += d;
    cout<<"\tDeposit Successful!!!\n\tCurrent Balance: "<<balance<<" taka"<<endl;}

    void withdraw(int w){
    if (balance>w){
        balance -=w;
        cout<< "\tWithdraw Successful!!!\n\tCurrent Balance: "<<balance<<" taka"<<endl;
    }else{
    cout<< "Insufficient money in your account.\n(Note: withdraw < balance)\n"; }}

    void transfer(int t,Account& acc){
    if(balance>t){
       balance-=t;
       cout<< "Transfer Successful!!!\nCurrent Balance: "<<balance<<" taka"<<endl;
       cout<< "\n\tFor Receiver Account__";
       acc.deposit(t);
       }else{
       cout<< "Insufficient money in your account.\n(Note: transfer < balance)\n"; }}
};
int main()
{
    Account user;
    user.setName("Moyna");
    user.setAccnum(103);
    user.setBalance(50000);
    user.setAcctype("Savings");

    Account u2;
    u2.setName("Alom");
    u2.setAccnum(203);
    u2.setBalance(10000);

    user.ShowAccountDetails();
    int choice,money,acc;
    cout<<"\nWhat you want to do? Select your choice:\n";
    cout<< "1. Deposit\n2. Withdraw\n3. Transfer\n\nChoice: ";
    cin>>choice;
    cout<<endl;
switch(choice){
case 1:
    cout<< "Enter the Amount you want to deposit: ";
    cin>>money;
    user.deposit(money);
    break;
case 2:
    cout<< "Enter the Amount you want to withdraw: ";
    cin>>money;
    user.withdraw(money);
    break;
case 3:
    cout<< "Enter the Account Receiver No: 203\n";
    cout<< "Enter the Amount you want to Transfer: ";
    cin>>money;
    user.transfer(money,u2);
    break;
default:
    cout<< "Invalid input!!!\n";
    break;
}
return 0;
}
