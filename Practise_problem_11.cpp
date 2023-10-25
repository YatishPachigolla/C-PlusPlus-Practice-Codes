#include<iostream>
#include<string>
using namespace std;

void set_numbers(int *ptr_numbers,int size);

void reset_numbers(int *ptr_numbers,int size);

void manual_set_numbers(int *ptr_numbers,int size,int value);

int main(){
        
    int numbers[3]{};
    cout << "Hello, Please Enter three integers separated by spaces: " << endl;
    for (int i = 0; i<3; i++){
        cin >> numbers[i]; 
    }
    
    int *ptr_numbers {numbers};
    
    cout << numbers << endl;    //array name is itself an address
    cout << &numbers << endl;
    cout << numbers+1 << endl;
    cout << ptr_numbers << endl;
    cout << *ptr_numbers << endl;
    cout << ptr_numbers+1 << endl;
    cout << *(ptr_numbers+1) << endl;
    cout << ptr_numbers+2 << endl;
    cout << *(ptr_numbers+2) << endl;
    
    int value {5};
    int size{3};
    
    
    cout << "------------------Printing after inputting: ------------------" << endl;
    for (int i = 0; i<3; i++){
        cout << numbers[i] << endl;
    }
    
    set_numbers(ptr_numbers,size);
    
    cout << "------------------Printing after SETTING: ------------------" << endl;
    for (int i = 0; i<3; i++){
        cout << numbers[i] << endl;
    }
    
    reset_numbers(numbers,size);
    
    cout << "------------------Printing after RESETTING: ------------------" << endl;
    for (int i = 0; i<3; i++){
        cout << numbers[i] << endl;
    }
    
    manual_set_numbers(numbers,size,value);
    
    cout << "------------------Printing after MANUAL SETTING: ------------------" << endl;
    for (int i = 0; i<3; i++){
        cout << numbers[i] << endl;
    }
}

void set_numbers(int *ptr_numbers, int size){
    
    for (int i =0; i <size; i++){
        *(ptr_numbers + i) = 1;
    }
}


void reset_numbers(int *numbers, int size){
    
    for (int i =0; i <size; i++){
        *(numbers + i) = 0;
    }
}


void manual_set_numbers(int *ptr, int size,int value){
    
    for (int i =0; i <size; i++){
         ptr[i] = value;
    }
}

