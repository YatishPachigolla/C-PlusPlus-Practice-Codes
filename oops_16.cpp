
//observe in the output, the order in which the constructor and destructors are being called for base and the derived class...

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Account{    //base class
private:
    double balance_private;
protected: 
    double balance_protected;
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

Account :: Account() : balance_private{0},balance_protected{0},balance{0}{ cout << "Account Constructor is called" << endl;}    //cons
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
    acc.balance = 800;
    //acc.balance_private = 300;     //private members are cant be accessed by the objects (base/derived)
    //acc.balance_protected = 600;   //protected members are cant be accessed by the objects (base/derived)
    //note that, private and protected memebers act exactly the same in a particular class. They can only be accessed using some public methods but not directly accessible.
    
    
    Account *acc_ptr = new Account();
    (*acc_ptr).deposit(2000);
    (*acc_ptr).withdraw(500);
    
    delete acc_ptr;
    
    cout << "======= SAVINGS ACCOUNT =======" << endl;
    
    Savings_Account sav_acc;   //debug and see that this object calls the parent object constructor that is account constructor first and then aclls the derived class constructor 
    sav_acc.deposit(2000);
    sav_acc.withdraw(500);
    sav_acc.balance = 500;   //Note: since balance is public in the base class, this is accessible not just by a base class object but also by the derived class objects...
    //sav_acc.balance_private = 300; //since this is private in the base class, is also private in the derived class. So, cannot be accessed by the derived class methods. Can only be accessed by the base class methods. Simply a private attribute is accessible only to its class members...
    //sav_acc.balance_protected = 600;  //since this is protected in the base class, can only be accessed by the base class members or the derived class members. For objects it seems to be a private member... 
    //note, to access this protected member, we can write a method in the derived class since it can be accessed from derived class members as well...
    //but the private attribute scan only be accessed by the base class members, not accessible by even the derived class members...
    
    
    Savings_Account *sav_ptr = new Savings_Account();
    (*sav_ptr).deposit(2000);
    (*sav_ptr).withdraw(500);
    
    delete sav_ptr;
    
    
    
    
}




















