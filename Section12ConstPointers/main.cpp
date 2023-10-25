#include<iostream>

using namespace std;


int main(){
    
    int highest {98};
    int lowest {49};
    double average {73.5};
    
    //pointers to constants
    const int *ptr1 {&highest};
    
    //*ptr1 = 97;      //ERROR
    ptr1 = &lowest;  //POSSIBLE
    
    
    //constant pointers
    double *const ptr2 {&average};
    
    *ptr2 = 97;      //POSSIBLE
   // ptr2 = &highest;  //ERROR
    
    
    
    //constant pointers to constants
    
   // both the places use const... both are errors in that scenario
        
    
    
    
    
    
    
    
    
}