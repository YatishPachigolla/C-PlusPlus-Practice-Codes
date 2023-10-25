#include<iostream>
#include<vector>
#include<string>
using namespace std;

// there is a small tricky thing during dereferencing the pointers for vectors

int main(){
    
    vector<string> frnds {"Suresh","Ramesh","Mahesh"};
    
    vector<string> *ptr {nullptr};  //this ptr is a null ptr which means it points to nowhere in the memory..good way to initialize
    
    cout << frnds.at(0) << endl; //general way to print the elements of a vector
    //cout << *(&frnds) << endl;
    cout << ptr << endl;
    ptr = &frnds;
    cout << ptr << endl;
    //cout << *ptr << endl;   //doesn't give Suresh... this is the catch
    cout << (*ptr).at(0) << endl;  //this way we should print... this is the catch
    
    //lets print all the strings of the vector using range based for loop
    
    cout << "Without using pointers: ";
    for (auto frnd : frnds)
        cout << frnd << " ";
    cout << endl;
    
    cout << "With the help of pointers: ";
    for (auto frnd : *(&frnds))          //address and then dereference... 
        cout << frnd << " ";
    cout << endl;
}