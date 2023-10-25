#include<iostream>
using namespace std;

int main(){
    
    int x{};
    
    x = 298;
    
    cout << &x << endl;
    
    
    int &lref = x;   //this is how arg as ref in functions is done...
    
    cout << lref << endl;
    
    
    lref = 2;
    
    cout << x << endl;
    cout << lref << endl;
    
    
    
    
}