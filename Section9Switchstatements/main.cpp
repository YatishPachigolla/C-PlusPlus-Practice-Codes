#include<iostream>
using namespace std;

int main(){
    //case expression should be known at the compile time itself. So, it should be a constant/literal also could be a character or string
    
    // enum grade {'S','A','B','C','D','E','F'}; CHECK THIS 
    
    
    char grade {};
    cout << "Please enter your grade: " << endl;
    cin >> grade;
    
    switch (grade){
        
        //or for user to type caps or non caps
        
        case 's' :
        case 'S' : cout << "Excellent!" << endl;
        break;
        case 'a' :
        case 'A' : cout << "Very Good!" << endl;
        break;       //If not break, once the case is true, no other case is checked but evaluated and printed
        case 'b' :
        case 'B' : cout << "Good!" << endl;
        break;
        case 'c' :
        case 'C' : cout << "Average!" << endl;
        break;
        case 'd' :
        case 'D' : cout << "Below Average!" << endl;
        break;
        case 'e' :
        case 'E' : cout << "Very bad!" << endl;
        break;
        case 'f' :
        case 'F' : 
        { // these curly braces are needed since we are declaring a char and it needs a scope
            char confirm{false};
            cout << "Are you sure? Type Yes or No (Y/N): " << endl;
            cin >> confirm;
            if (confirm == 'Y' || confirm == 'y')
                cout << "Fail!" << endl;
            else if (confirm == 'N' || confirm == 'n')
                cout << "Run again!" << endl;
            else
                cout << "Invalid" << endl;
        }
        break;
        default  : cout << "Please enter a valid grade" << endl; 
    }
    
}