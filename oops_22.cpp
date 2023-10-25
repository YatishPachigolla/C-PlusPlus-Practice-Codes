
//MUST WATCH VIDEO 185... important conditions are given for dynamic polymorphism
// this is now replaced with dynamic binding... 
//overridden functions are dynamically bound unlike the redefined functions in the derived classes...virtual functions are overridden 
//if a function is defined virtual, it is virtual all the way down its hierarchy if it is redefined... thsi is called overridden functions


#include<iostream>
#include<vector>
using namespace std;

class Account{
public: //since the function greeting is defined as virtual here, it is virtual all the way down its hierarchy and so dynamically bounded
    virtual void greeting() const {cout << "Hello from the Account class" << endl;}
};
class Savings_Account : public Account{
public:  //virtual is implicit but it is the best practise to place virtual keyword here too
    virtual void greeting() const {cout << "Hello from the Savings Account class" << endl;}  //note that this is redefining the base class functions... if we don't redefine them, they are inherited from the base class to the derived class...
};
class Checking_Account : public Account{
public:
    virtual void greeting() const {cout << "Hello from the Checking Account class" << endl;} 
};
class Trust_Account : public Account{
public:
    virtual void greeting() const {cout << "Hello from the Trust Account class" << endl;}
};
    
void welcome(const Account &source){  //passing object by reference, const is usually a good practise so we don't change the actual object
    cout << "Welcome!" << endl;
    source.greeting();  //since the object has to be constant, the methods called by these objects are forced to be constant... 
    
}

int main(){
    
    
    //Base Class REFERENCES (with Virtual) we can see polymorphic behavior
        Account a;
        Account &ref_a = a;
        ref_a.greeting();
        Savings_Account sa;
        Savings_Account &ref_sa = sa;
        ref_sa.greeting();
        Checking_Account ca;
        Checking_Account &ref_ca = ca;
        ref_ca.greeting();
        Trust_Account ta;
        Trust_Account &ref_ta = ta;
        ref_ta.greeting();
        
        
        cout << "==========Using Function==========" << endl;
        welcome(ref_a);
        welcome(ref_sa);
        welcome(ref_ca);
        welcome(ref_ta);
        
        

        
        
    
} 