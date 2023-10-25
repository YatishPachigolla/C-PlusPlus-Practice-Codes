#include<iostream>
#include<vector>

using namespace std;
//these overloaded functions are those with same function name but do things according to the input parameters passed..

// NOTE: it is independednt of return type of the functions. same functions with same parameter list throws error even
//if the return types are different. It gives compiler error, since overloaded functions work only for different parameter types.. not different return types...



//prototypes of overloaded functions...

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

//function definitions

void print(int num){
    cout << "Printing int: " << num <<  endl;
}


void print(double num = 56){
    cout << "Printing double: " << num <<  endl;
}

void print(string s){
    cout << "Printing string: " << s <<  endl;
}


void print(string s1, string s2){
    cout << "Printing two strings: " << s1 << " and " << s2 <<  endl;
}

void print(vector<string> vs){
    
    for (auto r : vs)
        cout << r << " ";
    cout << endl;
    
}


int main (){
    
    print();  //will chose one which has default value declared.. if more than one has, compiler error again
    print(100);
    print(12.56);
    print('Y'); //char is promoted to int always acc to ASCII code
    print("Yatish");  //c-style string is converted to C++ style string
    print("Yatish","Buddy");   // two c style strings are converted to C++ style strings
    string s{"BuddyString"};    
    print("Yatish",s);   //one c style string and one c++ style string..ofc, c style one is converted to c++ style
    vector <string> v {"Yatish","Suresh","Ramesh"};
    print(v);
 
    
    
}