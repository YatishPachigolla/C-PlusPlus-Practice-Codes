
//a beautiful implemenatation of the banking system. Note that heer I am considering redefining and using the same functions of the base class in the derived class...

#include<iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};


Account :: Account(double balance) : balance{balance}{  //overloaded
    
}
Account :: Account() : Account(0.0){   //delegating
     
}
void Account :: deposit(double amount){
    balance += amount;
} 
void Account :: withdraw(double amount){
    if (amount <= balance){
        balance -= amount;
    }
    else 
        cout << "Insufficient funds!" << endl;
}


class Savings_Account : public Account{
private:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance,double int_rate);
    void deposit(double amount);    //deposit method is redefined
    //withdraw method is inherited
};

Savings_Account :: Savings_Account(double balance,double int_rate) : Account(balance), int_rate {int_rate}{  //overloaded
    
}

Savings_Account :: Savings_Account() : Savings_Account{0.0,0.0}{  //delegating
    
}

//most important part of this code... redefining the method of the base class in the derived class and using some part of the method of the base class...
void Savings_Account :: deposit(double amount){
    amount = amount + (amount*int_rate/100);
    Account :: deposit(amount);    
} 

int main(){


    cout << "==========ACCOUNT==========" << endl;
    Account a_1;
    Account a_2{200};
    
    a_1.deposit(2000);
    a_1.withdraw(200);
    a_2.deposit(200);
    a_2.withdraw(1000);
    
    cout << "==========SAVINGS ACCOUNT==========" << endl;
    
    Savings_Account s_1;
    Savings_Account s_2{500,5};
    
    s_1.deposit(1000);
    s_1.withdraw(1005);
    s_2.deposit(1000);
    s_2.withdraw(1505);
    
    
    
}


