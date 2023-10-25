

//Multiple Exceptions
 #include<iostream>
 #include<string>
 using namespace std;
  
 
 double calculate_milespergallon(int miles, int gallons){
     if (gallons == 0)
         throw 0;    //error is detected here
     if (miles < 0 || gallons < 0)
         throw string {"Negative Value Error"};
     return static_cast<double>(miles)/gallons;
 }
 
 
 
 int main(){
     int miles{};
     int gallons{};
     double miles_per_gallons{};
     
     
     cout << "Enter the miles: ";
     cin >> miles;
     cout << "Enter the gallons: ";
     cin >> gallons;
     
     
     
     try{
         
        miles_per_gallons = calculate_milespergallon(miles,gallons);
        cout << "Result: " << miles_per_gallons << endl;    //these lines are not executed if there is a throw... note always that if a throw happens, try block is completely skipped and goes to catch block directly
     }
     
     catch(int &ex){
         cerr << "Sorry, cannot divide by zero" << endl; //error is handled here
     }
     
     catch(string &ex){
         cerr << ex << endl;
     }

    cout << "Bye" << endl;

 }