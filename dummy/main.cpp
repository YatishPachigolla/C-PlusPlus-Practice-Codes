#include<iostream>
//#include<climits>
//#include<limits.h>
#include<math.h>
#include<cstdint>
using namespace std;


int main(){
    unsigned int num = UINT_MAX + 1;
    int x = num;
    cout << num << ',' << x << endl;
    
    
    cout << "########## A negative value stored in unsigned int and interpreted in different ways ##########" << endl;
    unsigned int x1 = -5;
    cout << "Value of x1: " << x1 << endl;
    printf("Value of x1 in an unsigned format: %u\n", x1);
    printf("Value of x1 in a signed format: %d\n", x1);
    printf("Value of x1 in hexadecimal format: %x\n", x1);
    
    
    cout << "########## A negative value stored in signed int and interpreted in different ways ##########" << endl;
    int x2 = -5;
    cout << "Value of x2: " << x2 << endl;
    printf("Value of x2 in an unsigned format: %u\n", x2);
    printf("Value of x2 in a signed format: %d\n", x2);
    printf("Value of x2 in hexadecimal format: %x\n", x2);
    
    
    
    cout << "########## Overflow Scenarios ##########" << endl;
    cout << "Overflow: " << INT_MAX + 1 << endl; //overflow
    cout << "Overflow: " << INT_MIN - 1 << endl; //overflow
    cout << "Overflow: " << UINT_MAX + 2 << endl; //overflow
    
    
    
    //Fixed width integer types
    
    cout << "########## Fixed Width Integer Types ##########" << endl;
    cout << "INT16_MAX: " << INT16_MAX << endl;
    cout << "INT16_MIN: " << INT16_MIN << endl;
    
    int16_t i = INT16_MAX + 1; //takes 16 bits to store this integer i
    int16_t j = INT16_MIN - 1;
    cout << "Overflow in Fixed width: " << i << endl; 
    cout << "Overflow in Fixed width: " << j << endl; 
    
    cout << "########## Can we avoid overflow by saving the result to a larger type? ##########" << endl;
    
    int32_t i_large = INT16_MAX + 35; //yes, the overflow is avoided by storing in the large type
    cout << "Overflow in fixed width storing into large type: " << i_large << endl;
    cout << "yes, the overflow is avoided by storing in the large type" << endl;
    
    
    cout << "UINT16_MAX: " << UINT16_MAX << endl;
//    cout << "UINT16_MIN: " << UINT16_MIN << endl;
    
    uint16_t k = UINT16_MAX + 1;
    uint16_t l = - 1;
    
    cout << "Overflow in Fixed Width: " << k << endl;
    cout << "Overflow in Fixed Width: " << l << endl;
    
    // Binary operations over signed, unsigned, Fixed width int types...
    
    cout << "########## Binary operations over signed, unsigned, Fixed width INT Types ##########" << endl;
    
    int xi = 5;
    unsigned int xu = -3;
    unsigned int resultu = xi + xu;  //there is a type conversion happening
    int resulti = xi + xu;   //there is a type conversion happening
    cout << "Addition into unsigned forms: " << resultu << endl;
    cout << "Addition into signed forms: " << resulti << endl; 
    
    unsigned int uuu = UINT_MAX + 3;
    cout << uuu << endl;
    
    cout << "########## Addition/Subtraction of 32 bit int signed or unsigned with fixed width int of 16 bit ##########" << endl;
    
    
    
    
    
    
    
    
    
    cout << "########## Some random and important stuff ##########" << endl;
    
    cout << sizeof(unsigned int) << " Bytes" << endl;
    cout << sizeof(int) << " Bytes" << endl;
    cout << sizeof(uint16_t) << " Bytes" << endl;
    cout << sizeof(int16_t) << " Bytes" << endl;
    cout << sizeof(intmax_t) << " Bytes" << endl;
    
    
    cout << "########## Exploring the other extended integer types ##########" << endl;
    
    cout << sizeof(int_least16_t) << " Bytes" << endl;
    cout << INT_LEAST16_MAX << endl;

    int_least16_t il = INT_LEAST16_MAX + 1;  
    cout << il << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
