

//without exception handler.. just using if else logic..


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
     
     //miles_per_gallons = miles/gallons;   //int division will give int values... not double... with 0 this may crash..
    if (gallons != 0){
        miles_per_gallons = static_cast<double> (miles)/gallons;  //gives double and also inf for 0 division
        }
    else{
        cerr << "Sorry, cannot divide by zero" << endl;
        }
     cout << "Result: " << miles_per_gallons << endl;
     cout << "Bye" << endl;
     
     
     
 }