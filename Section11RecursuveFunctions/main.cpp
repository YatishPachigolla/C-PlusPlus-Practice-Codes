#include<iostream>
using namespace std;

unsigned long long factorial(unsigned long long);

unsigned long long fib(unsigned long long);


unsigned long long factorial(unsigned long long num){
    
    if (num == 0)
        return 1;    // base case... crucial to exit from the recursive functions
    return num*factorial(num-1);   //recursive case....
    
}


unsigned long long fib(unsigned long long num){
    if (num<= 1)
        return num;     //base case
    return fib(num-1) + fib(num-2);  //recursive case
    
    
}


int main(){
    
    cout << "Factorial: " << factorial(0) << endl;
    cout << "Fibanocci: " << fib(3) << endl;
    
}