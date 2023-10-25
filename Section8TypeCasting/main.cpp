// Program to take 3 int inputs and compute the average
// C++ performs operations between same type of operands always. Addition of int and double is done by converting int to double which is called typecasting.

#include<iostream>
using namespace std;

int main(){
    
    int sum {0};
    int num1 {},num2 {},num3 {};
    int count {3};
    double average{0.0};  //initiated to a double
    
    cout << "Enter three integers separated by spaces:";
    cin >> num1 >> num2 >> num3;
    cout << "The three integers are: " << num1 << "," << num2 << "," << num3 << endl;
    sum = num1+num2+num3;
    cout << "The sum is: " << sum << endl;
    //average = sum/count; // integer division.. so average is integer (demoted)
    
    //MODERN C++ TYPECASTING
    average = static_cast<double>(sum)/count; // num is typecasted to double so we have double division
    //average = (double)sum/count;  //OLD C/C++ TYPE CASTING
    cout << "The average is: " << average << endl;  
}