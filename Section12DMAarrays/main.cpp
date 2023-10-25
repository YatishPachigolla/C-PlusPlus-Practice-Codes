#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    
    int *array_ptr {nullptr};
    
    
    int size{};
    
    
    cout << "How big you need to store during run time in the heap? " << endl;
    
    cin >> size;
    
    array_ptr = new int[size]; //allocates an array of that size in heap
    
    cout << "The address on the heap is " << array_ptr << endl;
    //cout << "The value at the address (in heap) " << array_ptr << " is " << *array_ptr << endl;
    
    //*array_ptr = 25;
    
    //cout << "Now the value at the address (in heap) " << array_ptr << " is " << *array_ptr << endl;
    
    delete [] array_ptr;
    cout << "The address on the heap is " << array_ptr << endl; //still the address exists
    

}