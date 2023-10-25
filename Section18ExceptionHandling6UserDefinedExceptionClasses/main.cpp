
//throwing primitive types is not a good process... so, craete an exception classes and throw the objects(instances)

#include<iostream>
using namespace std;

class DivideByZeroException{
    
};
class NegativeValueException{
    
};

double calculate_mpg(int miles, int gallons){
    
    if (gallons == 0)
        throw DivideByZeroException();
    if (miles < 0 || gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles)/gallons;
    }
int main(){
    
    int miles{};
    int gallons{};
    double miles_per_gallons{};
    
    cout << "Enter miles:";
    cin >> miles;
    cout << "Enter gallons:";
    cin >> gallons;
    
    try{
        miles_per_gallons = calculate_mpg(miles,gallons);
        cout << "Result: " << miles_per_gallons << endl;
    }
    catch (const DivideByZeroException &ex){
        cerr << "Cannot be divided by zero" << endl;
    }
    catch (const NegativeValueException &ex){
        cerr << "One of the inputs is negative" << endl;
    }
    cout << "Bye" << endl;
}