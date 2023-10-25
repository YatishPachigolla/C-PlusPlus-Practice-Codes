#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Deep{
private:
    int *ptr;
public:
    void set_data_value(int d){*ptr = d;}
    int get_data_value(){return *ptr;}
    //constructor
    Deep(int d);
    //copy constructor
    Deep(const Deep &source);
    //destructor
    ~Deep();
};

//constructor
Deep :: Deep (int d){
    ptr = new int;  //pointer pointing to new int on heap
    *ptr = d;       //dereferencing the pointer and placing d
}

//copy constructor(deep)
Deep :: Deep(const Deep &source):Deep{*(source.ptr)}{      //takes the data of the source object and delegates to the constructor for creation of new address location and copy this source data value in that location...
    cout << "The copy constructor - deep copy" << endl;
}

//destructor
Deep :: ~Deep(){
    delete ptr;
    cout << "Destructor freeing the pointer" << endl;
}


void display_deep(Deep s){
    cout << s.get_data_value() << endl;
}


int main(){
    
    Deep obj1{100};
    display_deep(obj1);
    obj1.set_data_value(290);
    
    Deep obj2{1000};
    obj2.set_data_value(2000);
    
    return 0;
    
    
}