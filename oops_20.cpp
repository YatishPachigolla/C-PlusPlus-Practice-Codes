
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
        Account a;
        Savings_Account sa;
        Checking_Account ca;
        Trust_Account ta;
        
        //BASE CLASS POINTERS
        Account *ptr_a = new Account();
        Account *ptr_sa = new Savings_Account();
        Account *ptr_ca = new Checking_Account();
        Account *ptr_ta = new Trust_Account();
        
        cout << "==========MEMBER METHODS USING OBJECTS==========" << endl;
        a.greeting();
        sa.greeting();
        ca.greeting();
        ta.greeting();
        
        cout << "==========MEMBER METHODS USING BASE CLASS POINTERS==========" << endl;
        ptr_a->greeting();
        ptr_sa->greeting();
        ptr_ca->greeting();
        ptr_ta->greeting();
        
        cout << "==========REGULAR FUNCTION USING OBJECTS==========" << endl;
        welcome(a);
        welcome(sa);
        welcome(ca);
        welcome(ta);
        
        cout << "==========REGULAR FUNCTION USING BASE CLASS POINTERS==========" << endl;
        welcome(*ptr_a);
        welcome(*ptr_sa);
        welcome(*ptr_ca);
        welcome(*ptr_ta);
        
        cout << "==========ARRAY FOR BASE CLASS POINTERS==========" << endl;
        
        Account *array_pointers [] {ptr_a,ptr_sa,ptr_ca,ptr_ta};
        
        for (auto a:array_pointers)
            a -> greeting();
        
        
        cout << "==========VECTOR FOR BASE CLASS POINTERS==========" << endl;
        
        vector <Account*> vector_pointers {ptr_a,ptr_sa,ptr_ca,ptr_ta};
        
        for (auto v:vector_pointers)
            v -> greeting();
        
        

        
        
    
} 