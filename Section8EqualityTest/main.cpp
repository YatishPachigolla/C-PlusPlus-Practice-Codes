#include<iostream>
using namespace std;


int main(){
    cout << (23==189) << endl; //braces are pretty important 
    bool result {true};
    cout << result << endl; //boolean output gives 0 for false and 1 for true
    cout << boolalpha;  //boolalpha is from std library and is a stream manipulator
    cout << result << endl;  //prints true or false
    cout << noboolalpha;     //goes back to 0 
    cout << result << endl;   //prints 0 or 1
    
    //char as well can be checked, I think it checks the ascii or unicode for that
    
    char c1{};
    char c2{};
    cout << "Enter two characters separated by space: " << endl;
    cin >> c1 >> c2;
    cout << boolalpha << "Equal: " << (c1==c2) << endl;

 
    //double... interesting due to precision
    
    double d1{};
    double d2{};
    
    cout << "Enter two double sep with spaces: " << endl;
    cin >> d1 >> d2;
    cout << d1 << " " << d2 << endl;
    cout << boolalpha << "Equal: " << (d1==d2) << endl; //precision dependent
    
    //double nd int comp
    
    int i1{};
    double d3{};
    
    cout << "Enter an int and double sep by spaces" << endl;
    cin >> i1 >> d3;
    cout << boolalpha << "Equal: " << (i1==d3) << endl;  // c++ does typecasting (int to double) automatically...
    
    
    // Relational Operators
    
    //MODERN C++20 has new operator

    // Three way comparison relational operator
    
    //int m1{};
    //int m2{};
    
    //cout << "Enter two integers sep by spaces: " << endl;
    //cin >> m1 >> m2;
    //cout << boolalpha << "Result: " << (m1 <=> m2) << endl;
    //cout << boolalpha << "Result: " << (m1 <= m2) << endl;
    //cout << boolalpha << "Result: " << (m1 >= m2) << endl;
    //cout << boolalpha << "Result: " << (m1 > m2) << endl;
    //cout << boolalpha << "Result: " << (m1 < m2) << endl;
    //cout << boolalpha << "Result: " << (m1 != m2) << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}