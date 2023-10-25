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
    
    cout << "The entered numbers are: ";
    for (auto c : numbers)
        cout << c << " ";
    cout << endl;
}