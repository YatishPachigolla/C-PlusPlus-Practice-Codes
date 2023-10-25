#include <iostream>
#include <string>
using namespace std;

//sum of digits eg. n = 45, then sod = 4+5 = 9;

int sum_of_digits(int n) {
    // Write your code below this line
    
    if (n == 0)
        return 0;
    return (n%10 + sum_of_digits(n/10));
        
    // Write your code above this line
}


int main(){
    
    cout << sum_of_digits(56) << endl;
    
}