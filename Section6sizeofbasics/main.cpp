#include <iostream>
#include<climits>  // watch 48 video
using namespace std;
int main()
{
    //integer
    cout << "size of given number is " << sizeof(2.2) << " bytes" << endl;   //why double? not a float?
    cout << "size of int is " << sizeof(int) << " bytes" << endl;
    cout << "size of unsigned int is " << sizeof(unsigned int) << " bytes" << endl;
    cout << "size of short int is " << sizeof(short int) << " bytes" << endl;
    cout << "size of signed short int is " << sizeof(signed short int) << " bytes" << endl;
    cout << "size of long int is " << sizeof(long int) << " bytes" << endl;
    cout << "size of long long int is " << sizeof(long long int) << " bytes" << endl;
    cout << "=============================================================" << endl;
    
    //float
    
    cout << "size of float is " << sizeof(float) << " bytes" << endl;
    cout << "size of double is " << sizeof(double) << " bytes" << endl;
    cout << "size of long double is " << sizeof(long double) << " bytes" << endl;
    cout << "=============================================================" << endl;
    
    
    
}
