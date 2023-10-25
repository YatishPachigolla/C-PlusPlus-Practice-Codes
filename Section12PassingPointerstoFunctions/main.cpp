#include<iostream>

using namespace std;

//Watch video 125. Last example is very important... not written here...

void double_data(int *ptr){    //how does it look in case of reference without pointers... just look once... It looks like &val
    *ptr *= 2;
}



void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    
    int value {10};
    
    double_data(&value);   //in the case of referencing, we pass value itself but not the address..
    
    cout << value << endl;
    
    int *ptr{nullptr};
    ptr = &value;
    double_data(ptr);
    
    
    cout << value << endl;
    
    
    cout << "--------------" << endl;
    
    int x{29}, y{45};
    cout << "Before calling swap " << "x = " << x << " and " << "y = " << y <<  endl;
    
    swap(&x,&y);
    cout << "After calling swap " << "x = " << x << " and " << "y = " << y <<  endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}