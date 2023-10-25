#include<iostream>
#include<string>
#include<vector>
using namespace std;
void modify_elements(vector<int> &numbers);
int main(){
    
    vector<int> numbers{};
    cout << "Enter the 10 integers separated by spaces: " << endl;
    for (int i = 0; i<10; i++){
        int x{};
        cin >> x;
        numbers.push_back(x);
    }    


    modify_elements(numbers);

    
    for (int i = 0; i<10; i++){
            cout << numbers[i] << endl;
    }
}


void modify_elements(vector<int> &numbers){ // took as a reference
    int length = numbers.size();
    for (int i = 0; i<length; i++){
        if (numbers[i]%2 == 0)
            numbers[i] = 0;
    }
    }