#include<iostream>
#include<string>
#include<vector>
using namespace std;
void modify_elemnts(vector<int> numbers);
int main(){
    
    vector<int> numbers{};
    cout << "Enter the 10 integers separated by spaces: " << endl;
    for (int i = 0; i<10; i++){
        int x{};
        cin >> x;
        numbers.push_back(x);
    }    
    
    void modify_elemnts(vector<int> numbers);
    
    for (int i = 0; i<10; i++){
            cout << numbers[i] << endl;
    }
}
void modify_elemnts(vector<int> numbers){ // the vector is copied into the function, so no change to actual elements
    //int length = numbers.size();
    for (auto c :numbers){
        if (c%2 == 0)
            c = 0;
    }
    }