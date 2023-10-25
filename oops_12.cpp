#include<iostream>
using namespace std;

class Account{
private:
    double balance;
public:
    void set_balance(double balance){this -> balance = balance;}
    double get_balance(){return balance;}
};


int main(){
    
    Account frank;
    frank.set_balance(1000);
    cout << frank.get_balance() << endl;
    
    
}