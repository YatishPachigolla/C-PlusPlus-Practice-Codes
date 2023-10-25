#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){
    
    char uninitialized_name[20]; //also warns that it is uninitialized
    char first_name[20]{}; // initializing is imp in strings 
    char last_name[20]{};
    char full_name[50]{};
    char naya_full_name[50]{}; //will use getline command..  look the eg down...
    char temp[50]{};
    
    cout << uninitialized_name << endl;   //prints garbage and would have stopped if found null character anywhere
    cout << "Enter your first name: " << endl;
    cin >> first_name;
    cout << "Enter your last name: " << endl;
    cin >> last_name;
    
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    //strlen() gives an unsigned value whose type is size_t... study about it
    cout << "Hello, " << last_name << " your last name has " << strlen(last_name) << " characters" << endl;
    
    
    strcpy(full_name,first_name); //copy first name into full name
    strcat(full_name," ");//concatenate full name and a space
    strcat(full_name,last_name);//concatenate first name and last name
    cout << "Your full name is " << full_name << endl;
    
    
    cout << "-------------------------------------------------------------------" << endl;
    
    cout << "Enter your naya full name: ";
    
    //cin >> naya_full_name;
    
    //cout << "Your new full name is " << naya_full_name << endl; //without get line... white space is seen and stops
    
    
    //new_full_name = {}; // not possible to assign like this... 
    //How to empty a string if we want to ???
    
    cin.getline(naya_full_name,50);  //why is this not working?
    
    cout << "Your new full name is " << naya_full_name << endl; 
    
    
    
    cout << "-------------------------------------------" << endl;
    
    strcpy(temp,full_name);
    
    cout << strcmp(temp,full_name) << endl; //note that, if equal strcmp gives 0 not 1...
    
    
    if(strcmp(temp,full_name) == 0)
        cout << "temp and full name are the same" << endl;
    else
        cout << "temp and full name are different" << endl;
        
    
    
    cout << "-------------------------------------------" << endl;
    
    for (size_t i{0}; i<strlen(full_name); ++i){
        if (isalpha(full_name[i]))   //if alphabetical
            full_name[i] = toupper(full_name[i]);
    }
    
    cout << "Uppercase converted full name is: " << full_name << endl;
    
    
    
    cout << "-------------------------------------------" << endl;
    
    //lexicographic order based for strcmp positive or negative or 0
    
    if(strcmp(temp,full_name)==0) // ofc not equal, we made one to uppercase
        cout << "They are the same" << endl;
    else 
        cout << "They are different" << endl;
        
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name,temp) << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " <<strcmp(temp,full_name) << endl;    
    
}
