#include<iostream>
using namespace std;

int main(){
    
    
    int a {10};
    int b {20};
    int result {};
    int score{92};
    int num {6};
    
    result = (a > b) ? a : b;
    
    
    result = (a < b) ? (b - a) : (a - b);
    
    
    result = (b != 0) ? b/a : 0;
    
    
    cout << result << endl;
    cout << ((score > 90) ? "Excellent" : "Good" ) << endl;;
    cout << num << " is" << ((num % 2 == 0) ? " Even" : " Odd") << endl;
    
}
    