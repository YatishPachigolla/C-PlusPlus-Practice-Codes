
//fix the bug

#include<iostream>
#include<string>
#include<vector>

using namespace std;


void fill_an_array (int *ptr, int size);

int main(){
    
    
    int x{};
    
    cout << x << endl;
    cout << &x << endl;
    //int *p = &x;
    //*(p + 1) = 2;
    cout << (&x) +1 << endl;
    cout << (&x) +2 << endl;
    
    fill_an_array(&x,10);
    
    
    cout<< "the filled array is: " << endl;

    for(int i = 0; i<10; i++){
        cout << *(&x+i) << endl;
    }
    
}

void fill_an_array (int *ptr,int size){
    
    int z {};
    for (int i = 0; i <size; ++i){
        *(ptr + i) = z;
        z = z + 100;
    }
}