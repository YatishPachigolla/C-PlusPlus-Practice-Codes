#include<iostream>
//coding exercise 29...swapping values using pointers...

using namespace std;

int main(){
     
    int scores[] {100,95,89,68,-1};
    int *scores_ptr{scores};
    
    cout << "Size of the array is: " << sizeof(scores) << endl;  //gives 20 bytes
    cout << "number of elements in the array: " << sizeof(scores)/sizeof(int) << endl;
    
    while(*scores_ptr != -1){
        cout << *scores_ptr << endl;
     //pointer arithmatic
        scores_ptr++;  //points to the next elemets of the array.. the address is incremented by the size of the element in the array
        }
        
    cout << "\n----------------- Another way -----------------------" << endl;
    
    
    scores_ptr = scores;
    
    while(*scores_ptr != -1){
        
        cout << *scores_ptr++ << endl;  //right to left associativity... same precendence
    }
    
    cout << "\n----------------------------------------" << endl;
    
    string s1{"Frank"};
    string s2{"Frank"}; 
    string s3{"James"};
        
    string *str_ptr_1{&s1};
    string *str_ptr_2{&s2};
    string *str_ptr_3{&s1};
    
    
    cout << boolalpha;
    
    cout << str_ptr_1 << "==" << str_ptr_2 << ":" << (str_ptr_1 == str_ptr_2) << endl;
    
    cout << str_ptr_1 << "==" << str_ptr_3 << ":" << (str_ptr_1 == str_ptr_3) << endl;
    
    cout << *str_ptr_1 << "==" << *str_ptr_2 << ":" << (*str_ptr_1 == *str_ptr_2) << endl;
    
    cout << *str_ptr_1 << "==" << *str_ptr_2 << ":" << (*str_ptr_1 == *str_ptr_2) << endl;
    
    
    cout << "\n---------------C Style Strings-------------------------" << endl;
    
    char name[] {"Frank"};
    
    char *char_ptr_1 {nullptr};
    char *char_ptr_2 {nullptr};
    
    
    char_ptr_1 = &name[0];
    char_ptr_2 = &name[3];
    
    cout << "In the string " << name << ", " << *char_ptr_2 << " is " << (char_ptr_2-char_ptr_1) << " characters away from the " << *char_ptr_1 << endl;
    
    //pointer subtraction is directly from the formula for the increment and decrement of pointers...
    
    
    
    
    
    return 0;
    
}