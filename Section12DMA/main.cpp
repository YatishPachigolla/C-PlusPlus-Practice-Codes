#include<iostream>
#include<vector>
#include<string>


//delete pointer will not make us lose the pointer address... only the content in that location is erased..



using namespace std;

int main(){
    
    int *int_ptr{nullptr};
    
    int_ptr = new int; // allocate an integer on the heap and can be only accessed this memory location on heap via pointer...
    
    cout << "The address on the heap is " << int_ptr << endl;
    cout << "The value at the address (in heap) " << int_ptr << " is " << *int_ptr << endl;
    
    *int_ptr = 25;
    
    cout << "Now the value at the address (in heap) " << int_ptr << " is " << *int_ptr << endl;
    
    delete int_ptr; // frees the allocated storage, so we have some garbage value back.. but the pointer is not killed. 
    //pointer is still existing and pointing to that address. we can change the location the pointer points to by assigning
    //a new address to this pointer...
    
    cout << "The address on the heap is " << int_ptr << endl;
    
    cout << "The value at the address (in heap) " << int_ptr << " is " << *int_ptr << endl;
     
    
}