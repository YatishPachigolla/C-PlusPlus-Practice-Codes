
//Not pbv... arrays are always passed by reference.

#include<iostream>

using namespace std;

//prototyping

void print_array(int arr[],size_t size);
void set_array(int arr[],size_t size,int value);

void print_array(int arr[],size_t size){ //arr denotes the address of the base value stored in the array
    //for (auto i : arr) since it is an address, it doesn't work
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

//void set_array(const int arr[],size_t size,int value)
void set_array( int arr[],size_t size,int value){ //arr denotes the address of the base value stored in the array
    //for (auto i : arr) since it is an address, it doesn't work... but in genral this works.. how and why?
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;  //using const will not allow this... 
}

int main(){
    
    int num[] {1, 2, 3, 4, 5};
    
    print_array(num,5);
    set_array(num,5,1);
    print_array(num,5); //note that the actual parameter values are changed..since on the arr name we pass the address and the function set array or print array directly works on the address provided. It prints from that address and set the values in that address..

}