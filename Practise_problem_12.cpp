#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    
    vector<int> vec{};
    cout << "Hello, Please enter 10 integers separated by spaces: " << endl;
    
    for (int i = 0; i<10; i++){
        int x{};
        cin >> x;
        vec.push_back(x);
    }
    cout << "The size of the vec is " << vec.size() << endl;
    for (int i = 0; i<10; i++){
        cout << vec[i] << " and the address is " << &vec[i] << endl;
    }
}