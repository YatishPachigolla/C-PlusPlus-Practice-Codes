#include<iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> values {1,2,-1,3,-1,-99,7,8,10}; 
    //-1 is noise and would ignore and continue but -99 is corrupted and would like to stop completely thereafter
    //using range based for loop
    for (auto val : values)
        if (val == -1)   //noise
            continue;   //skips the entire statements and goes to next iteration
        else if (val == -99)    //corrupted
            break;      //skips the entire statements and breaks the loop and control goes to statement outside the loop 
        else
            cout << val << endl;
}