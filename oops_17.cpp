#include<iostream>
using namespace std;

class Actual_value{
private:
    int x;
public:
    Actual_value() : x{0} {cout << "The base class no args constructor is called" << endl;}
    Actual_value(int x_val) : x{x_val} {cout << "The base class single arg constructor is called" << endl;}
    ~Actual_value() {cout << "The base class destructor is called" << endl;}
};


class Doubled_value : public Actual_value{
    
private:
    int y;
public:
    Doubled_value() : Actual_value(), y{0} {cout << "The derived class no args constructor is called" << endl;}
    Doubled_value(int x) : Actual_value(x), y{2*x} {cout << "The derived class single arg constructor is called" << endl;}
    ~Doubled_value() {cout << "The derived class destructor is called" << endl;}
};


int main(){
    Actual_value obj1;
    Actual_value obj2{100};
    
    Doubled_value obj3;
    Doubled_value obj4{200};
    
    
    
}