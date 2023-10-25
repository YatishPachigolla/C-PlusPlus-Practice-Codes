#include <iostream>
#include<vector>
using namespace std;

 //Watch video 85 Input Validation is the key thing where while looping is used...
 // Also watch Infinite loops video 88


//do while.. MENU DRIVEN PROGRAMS, INPUT VALIDATION
int main(){
    
    char selection {};
    
    do {
    cout << "----------------------------------------" << endl;
    cout << "1. Do this \n2. Do that \n3. Do something else \nQ. Quit" << endl; 
    cout << "Enter your selection: " << endl;
    cin >> selection;
    
    if (selection == '1')
        cout << "You chose" << selection << " - Do this" << endl;
    else if (selection == '2')
        cout << "You chose" << selection << " - Do that" << endl;
    else if (selection == '3')
        cout << "You chose" << selection << " - Do something else" << endl;
    else if (selection == 'Q' || selection == 'q')
        cout << "Goodbye" << endl;
    else
        cout << "Unknown option, try again!" << endl;
    } while (selection != 'Q' && selection != 'q');   // note here it should be logical and operator
    
}