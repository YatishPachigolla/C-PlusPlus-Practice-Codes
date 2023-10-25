#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    //int i {0};
    
    for(int i {1}; i<=5; ++i)
        cout << i << endl;  // i is only valid in this loop not outside the loop
        
        
    //for(;;)
    //    cout << "ENDLESS LOOP" << endl;
    
    
cout << "\n===================================" << endl;
    
    
    for (int i{1};i<=10;i+=2)
        cout << i << endl;
    
    
cout << "\n===================================" << endl;
    
    
    for (int i{10} ; i>0; --i)
        cout << i << endl;
        
        
cout << "\n===================================" << endl;
    
    
    for(int i{10};i<=100;i+=10)
        if(i%15 == 0)
            cout << i << endl;
    
    
cout << "\n===================================" << endl;
    
    
    //USING COMMA OPERATOR INSIDE FOR LOOP 
    
    for (int i{1},j{5} ; i <=5 ;  ++i,--j)
        cout << i << "*" << j << "=" << (i*j) << endl;
    
    
    
cout << "\n===================================" << endl;
    
    //Printing numbers like a table
    
    for (int i {1}; i<=100; i++){
        cout << i;
        //Alternatively, to if else, we can use conditional operator
        /*
        if (i % 10 == 0)
            cout << endl;
        else
            cout << " ";
        */
        //Using conditional operator instead of if else loop
        
        cout << ((i%10 == 0)? "\n":" ");
        
        
        
cout << "\n===================================" << endl;
    
    //Looping through the vector
    
    
    vector<int> nums{10,20,30,40,50};
    cout << "\nnums.size is typecasted to int"<<endl;
    for (int i {0}; i < static_cast<int>(nums.size()); i++)  //typecasted since the nums.size is unsigned integer
        cout << nums[i] << endl;
    
   //OR
    cout << "\nint initialized as unsigned, so no typecasting"<<endl;
    for (unsigned int i {0}; i < (nums.size()); i++) 
        cout << nums[i] << endl;
   





        
            
            
            
            
    }
    }
                
    
    
    
    
    
    
    
    
    

