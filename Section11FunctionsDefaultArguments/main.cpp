#include<iostream>
#include<iomanip> // i din use the precision thing... from this...will look into it later

using namespace std;

//prototyping 
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.5);
//Note that we have provided the values of tax rate and shipping as default values during the prototyping itself...
//also note, the default parameters should be at the tail of the parameters...

void greeting(string name, string prefix = "Mr.", string suffix = " "); //prototyping


//definitions 
double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost+= (base_cost*tax_rate) + shipping;
}


void greeting(string name, string prefix, string suffix){
    cout << "Hello " << prefix + name + " " + suffix << endl;
}

int main(){
    
    double cost_1 {};
    cost_1 = calc_cost(100,0.08,4.25);  //no default values are used and also note that the base cost argument is 100 an integer.. c++ promotes this int to double
    cout << cost_1 << endl;

    
    double cost_2 {};
    cost_2 = calc_cost(100.0,0.08);  //shipping value is used by default
    cout << cost_2 << endl;
    
    
    double cost_3 {};
    cost_3 = calc_cost(200.0);  //tax rate and shipping value is used by default
    cout << cost_3 << endl;
    
    greeting("Yatish","Dr.","Researcher");
    greeting("Yatish","Dr.");
    greeting("Yatish");

}