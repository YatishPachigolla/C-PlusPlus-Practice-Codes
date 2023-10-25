#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Account{
private:
    std::string name;
    double balance;
public:
    std::string get_name(){return name;}
    double get_balance(){return balance;}
    //constructor with default parameters
    Account(std::string name_val = "None",double balance_val = 10); //prototype
    //copy constructor
    Account(const Account &source_account); //prototype
    //destructor
    ~Account(){cout << "The destrcutor is called for " + name << endl;}
};

Account :: Account (std::string name_val,double balance_val):
            name{name_val},balance{balance_val}{
    //name = name_val;
    //balance = balance_val;   remember, this is not true initialization
}

Account :: Account (const Account &source_account):
            name{source_account.name},balance{source_account.balance}{
    cout << "The copy constructor for " << name << " is called" << endl;
}


void get_details(Account p){
    cout << p.get_name() << endl;
    cout << p.get_balance() << endl;
}

int main(){
 
    Account frank;
    Account hero{"Hero",5000};
    Account another_frank {frank};
    
    cout << "Hello, " << frank.get_name() << ". Your balance is " << frank.get_balance() << endl;
    cout << "Hello, " << hero.get_name() << ". Your balance is " << hero.get_balance() << endl;
    cout << "Hello, " << another_frank.get_name() << ". Your balance is " << another_frank.get_balance() << endl;
    
}
