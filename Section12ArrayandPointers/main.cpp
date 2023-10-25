#include<iostream>


using namespace std;


int main(){
    
    int marks[] {92,94,96,98};
    int *marks_ptr{marks}; //no ampersand needed here...since array anme is itself an address
    
    cout << "address of the array marks via array name: " << marks << endl;
    cout << "address of the array marks via pointer: " << marks_ptr << endl;
    
    cout << "\n -------------------Array subscript notation------------------" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    
    
    
    cout << "\n -------------------Pointer subscript notation------------------" << endl;
    cout << marks_ptr[0] << endl;
    cout << marks_ptr[1] << endl;
    cout << marks_ptr[2] << endl;
    cout << marks_ptr[3] << endl;
    
    
    cout << "\n -------------------Pointer offset notation------------------" << endl;
    cout << *marks_ptr << endl;
    cout << *(marks_ptr++) << endl;  //pointer increments...
    cout << *(marks_ptr+2) << endl;
    cout << *(marks_ptr+3) << endl;
 
    
    cout << "\n -------------------Array offset notation------------------" << endl;
    cout << *marks << endl;
    cout << *(marks+1) << endl;
    cout << *(marks+2) << endl;
    cout << *(marks+3) << endl;
 
    
    
    
}