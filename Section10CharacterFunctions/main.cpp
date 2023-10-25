#include <iostream>
#include<cctype> //character based functions
using namespace std;


int main(){
    
    
    char c{};
    
    
    cout << "Enter character: ";
    cin >> c;
    //c = '"';
    
    //TESTING FUNCTIONS
    cout << "Letter: " << isalpha(c) << endl;
    cout << "Letter or Number: " << isalnum(c) << endl;
    cout << "Digit: " << isdigit(c) << endl;
    cout << "LowerCase: " << islower(c) << endl;
    cout << "UpperCase: " << isupper(c) << endl;
    cout << "Printable: " << isprint(c) << endl;
    cout << "Punctuation: " << ispunct(c) << endl;
    cout << "space: " << isspace(c) << endl;
    
    c = 'd';
    cout << toupper(c) << endl;   //not working.. check..
    //CONVERTING FUNCTIONS
    
    if (islower(c))
        cout << "Converted to upper: " << toupper(c) << endl;
    else if (isupper(c))
        cout << "Converted to lower: " << tolower(c) << endl;
     
    
    
    
    
}