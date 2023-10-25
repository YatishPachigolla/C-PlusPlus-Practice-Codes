#include<iostream>
#include<string>

using namespace std;



double cost_calculator(double &weight, const double &weight_per_gram);

int main()
{
    
    cout << "Please enter the weight of the parcel:" << endl;
    double weight {};
    cin >> weight;
    
    const double weight_per_gram{0.1};
    double price{};
    price = cost_calculator(weight,weight_per_gram);
    
    cout << "The price you have to pay for the parcel is: " << price << endl;
    cout << &weight_per_gram << endl;
    
    
}



double cost_calculator(double &weight, const double &weight_per_gram){
    //weight_per_gram = 1;
    double amount =  (weight*weight_per_gram);
    amount += 0.06*amount;
    return amount;
}