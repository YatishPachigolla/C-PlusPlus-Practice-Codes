#include<iostream>
using namespace std;

// Check if the entered number is inside the bounds or not?

int main(){
    
    const int lower_bound{10};
    const int upper_bound{20};
    
    int num{};
    
    cout << "Enter an integer between "<< lower_bound << " and " << upper_bound << endl;
    cin >>  num;
    
    bool within_bounds{false};
    within_bounds = (num > 10 && num < 20);
    cout << boolalpha << "The num is within the bounds mentioned: " << within_bounds << endl;
    

    
}