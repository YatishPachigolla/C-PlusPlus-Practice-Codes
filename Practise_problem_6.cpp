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
    //cout << (numbers) << endl;//will not work.
    cout << (&numbers) << endl;  //which address is this printing? metadeta of the vector such as size, capacity and all. Not the actual address of the data elements
    cout << &numbers[0] << endl;
    cout << *(&numbers[0]) << endl;
    cout << &numbers[0]+1 << endl;
    cout << *(&numbers[0]+1) << endl;
  
    //void modify_elemnts();
    
}