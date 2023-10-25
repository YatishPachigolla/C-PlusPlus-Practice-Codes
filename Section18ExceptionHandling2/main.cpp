

//with exception handler this time.. 

 #include<iostream>
 using namespace std;
 
 int main(){
     int miles{};
     int gallons{};
     double miles_per_gallons{};
     
     
     cout << "Enter the miles: ";
     cin >> miles;
     cout << "Enter the gallons: ";
     cin >> gallons;
     
     
    try {
        if (gallons == 0)
            throw 0;       //if throw statement is executed, the below statements are not executed..
        miles_per_gallons = static_cast<double>(miles)/gallons;
        cout << "Result: " << miles_per_gallons << endl;
        }  
    catch (int &ex){
        cerr << "Sorry, cannot divide by zero" << endl;
    }
     cout << "Bye" << endl;
 }