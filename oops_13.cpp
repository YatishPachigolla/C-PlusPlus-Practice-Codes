#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Shallow{
private:
    int *ptr;
public:
    void set_data_value(int d){*ptr = d;}
    int get_data_value(){return *ptr;}
    //constructor
    Shallow(int d);
    //copy constructor
    Shallow(const Shallow &source);
    //destructor
    ~Shallow();
};

//constructor
Shallow :: Shallow (int d){
    ptr = new int;  //pointer pointing to new int on heap
    *ptr = d;       //dereferencing the pointer and placing d
}

//copy constructor(shallow)
Shallow :: Shallow(const Shallow &source):ptr{source.ptr}{      //address is copied from the source pointer.. so, source and copy objects point to the same memory location
    cout << "The copy constructor - shallow copy" << endl;
}

//destructor
Shallow :: ~Shallow(){
    delete ptr;
    cout << "Destructor freeing the pointer" << endl;
}


void display_shallow(Shallow s){
    cout << s.get_data_value() << endl;
}


int main(){
    {
    Shallow obj1{100};
    display_shallow(obj1);
    }
    Shallow obj2{1000};
    obj2.set_data_value(2000);
    
    return 0;
    
    
}