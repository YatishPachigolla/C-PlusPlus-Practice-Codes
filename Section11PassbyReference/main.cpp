#include<iostream>
#include<vector>
#include<string>  //is this mandatory here?
//watch scope rules video... static and global variables are discussed...
using namespace std;

    //function prototypes
    
    void pass_by_ref1(int &num);
    void pass_by_ref2(string &s);
    void pass_by_ref3(vector<string> &v);
    void print_vector(const vector<string> &v); // we don want our code to change inside the print function by mistake
    
    
    
    //function definitions
    
    void pass_by_ref1(int &num){
        num = 1998;
    }
    
    void pass_by_ref2(string &s){
        s = "Changed to Yatish";
    }
    
    void pass_by_ref3(vector<string> &v){
        v.clear();
    }
    void print_vector(const vector<string> &v){
        for (auto s: v)
            cout << s << " ";
        cout << endl;
    }
    
    
    int main(){
        
        int num{10};
        int another_num{123};
        cout << "Num before calling pass_by_ref1: " << num << endl;
        pass_by_ref1(num); //we pass just the num...same like pbv...function takes it as alias
        cout << "Num after calling pass_by_ref1: " << num << endl;
        cout << "Another Num before calling pass_by_ref1: " << another_num << endl;
        pass_by_ref1(another_num); //we pass just the num...same like pbv...function takes it as alias
        cout << "Another Num after calling pass_by_ref1: " << another_num << endl;
        
        string name{"Buddy"};
        cout << "Name before calling pass_by_ref2: " << name << endl;
        pass_by_ref2(name); //we pass just the name...same like pbv...function takes it as alias
        cout << "Name after calling pass_by_ref2: " << name << endl;
        
        
        vector<string> frnds{"Ramesh","Suresh","Mahesh"};
        //cout << "Frnds before calling pass_by_ref3: " << frnds << endl; //vectors cannot be printed like this
        cout << "frnds before calling pass_by_ref3: ";
        print_vector(frnds);
        pass_by_ref3(frnds);
        //cout << "Frnds after calling pass_by_ref3: " << frnds << endl;
        cout << "frnds after calling pass_by_ref3: ";
        print_vector(frnds);
    
    }