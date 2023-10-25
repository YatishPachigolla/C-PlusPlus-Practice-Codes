#include <iostream>
#include<string>
#include<vector>
using namespace std;


class Account{
private:
    double balance;
public:
    string name;
    void set_balance(double bal){balance = bal;cout << "Set Balance Successful"<< endl;}   //inline functions
    double get_balance(){cout << "Return Balance Successful"<< endl;return balance;}  //inline functions
    
    void deposit(double val);  //prototypes
    void withdraw(double val);  //prototypes
};

//class methods implemented outside the class...
 
void Account :: deposit(double val){
    balance += val;
    cout << "Deposit Successful" << endl;
}

void Account :: withdraw(double val){
    if (val <= balance){
        balance -= val;
        cout << "Withdraw Successful" << endl;
    }
    else 
        cout << "Insufficient Funds" << endl;
}

int main(){
    
    Account frank_account;
    //cout << frank_account.balance << endl;
    
//   / frank_account.name = "Frank";
    frank_account.set_balance(0);
    cout << frank_account.get_balance() << endl;
    
    frank_account.deposit(5000);
    frank_account.withdraw(2000);
    
    
    
}
