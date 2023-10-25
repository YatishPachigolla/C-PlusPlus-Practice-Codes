#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    vector<int> numbers{};
    cout << "Enter the 10 integers separated by spaces: " << endl;
    for (int i = 0; i<10; i++){
        int x{};
        cin >> x;
        numbers.push_back(x);
    }
    
    cout << "The address of the even numbers are: ";
    cout << "The actual addrress of the 2nd element " << (numbers[1]) << " is given as " << &(numbers[1]) << endl;
    for (auto &c : numbers){  //c is a local copy of the elemnts in the vector numbers..so pass by ref 
        if (c%2 == 0)    
            cout << &c << endl; //so address of c is the actual address
    }
    
    cout << endl;
}