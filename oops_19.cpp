
//clearly, we can see the issues of static binding. static binding is a early/compile time binding. need dynamic binding/ run time binding and so virtual functions are used later...


#include<iostream>
#include<vector>
using namespace std;

class Account{
public:
    void greeting() const {cout << "Hello from the Account class" << endl;}
};
class Savings_Account : public Account{//note that the greeting functions are redefined in the derived classes and are all statistically bound since the actual function in its parent class is not dynamic but static...
public:
    void greeting() const {cout << "Hello from the Savings Account class" << endl;}  //note that this is redefining the base class functions... if we don't redefine them, they are inherited from the base class to the derived class...
};
class Checking_Account : public Account{
public:
    void greeting() const {cout << "Hello from the Checking Account class" << endl;} 
};
class Trust_Account : public Account{
public:
    void greeting() const {cout << "Hello from the Trust Account class" << endl;}
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
        
        Account *array_pointers [] {ptr_a,ptr_ca,ptr_sa,ptr_ta};
        
        for (auto a:array_pointers)
            a -> greeting();
        
        
        cout << "==========VECTOR FOR BASE CLASS POINTERS==========" << endl;
        
        vector <Account*> vector_pointers {ptr_a,ptr_ca,ptr_sa,ptr_ta};
        
        for (auto v:vector_pointers)
            v -> greeting();
        
        delete ptr_a;
        delete ptr_sa;
        delete ptr_ca;
        delete ptr_ta;
        
        
        
        
        
    
} 