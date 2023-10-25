
//observe in the output, the order in which the constructor and destructors are being called for base and the derived class...

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Account{    //base class
public:   //all are public
    double balance;
    //std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();  //cons
    ~Account();  //dest
}; 

void Account :: deposit(double amount){
    cout << "Account deposit called with " << amount << endl;
}
void Account :: withdraw(double amount){
    cout << "Account withdraw called with " << amount << endl;
}

Account :: Account() : balance{0}{ cout << "Account Constructor is called" << endl;}    //cons
Account :: ~Account(){ cout << "Account Destructor is called" << endl;}   //dest



class Savings_Account : public Account{
public:
    double interest_rate;
    void deposit(double amount);
    void withdraw(double amount);  
    Savings_Account();
    ~Savings_Account();    
};
 

void Savings_Account :: deposit(double amount){
    cout << "Savings Account deposit called with " << amount << endl;
}
void Savings_Account :: withdraw(double amount){
    cout << "Savings Account withdraw called with " << amount << endl;
}

Savings_Account :: Savings_Account() : interest_rate{3.0}{ cout << "Savings Account Constructor is called" << endl;}    //cons
Savings_Account :: ~Savings_Account(){ cout << "Savings Account Destructor is called" << endl;}   //dest




int main(){
    
    cout << "======= ACCOUNT =======" << endl;
    
    Account acc;
    acc.deposit(2000);
    acc.withdraw(500);
    
    
    Account *acc_ptr = new Account();
    (*acc_ptr).deposit(2000);
    (*acc_ptr).withdraw(500);
    
    delete acc_ptr;
    
    cout << "======= SAVINGS ACCOUNT =======" << endl;
    
    Savings_Account sav_acc;   //debug and see that this object calls the parent object constructor that is account constructor first and then aclls the derived class constructor 
    sav_acc.deposit(2000);
    sav_acc.withdraw(500);
    
    Savings_Account *sav_ptr = new Savings_Account();
    (*sav_ptr).deposit(2000);
    (*sav_ptr).withdraw(500);
    
    delete sav_ptr;
    
    
    
    
}




















