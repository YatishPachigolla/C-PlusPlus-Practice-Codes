#include<iostream>
using namespace std;

int main(){
    
    int cents{0};
    cout << "Enter an integer representing the number of cents: " << endl;
    cin >> cents;
    
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};
    
    
    int n_dollars{0},n_quarters{0},n_dime{0},n_nickel{0},n_penny{0};
    
    n_dollars = cents / dollar;
    //cents = cents - (n_dollars*dollar);    //without modulo operator
    cents = cents % dollar;                  // with modulo operator
    n_quarters = cents / quarter;
    //cents -= (n_quarters*quarter);
    cents = cents % quarter;
    n_dime = cents / dime;
    //cents -= (n_dime*dime);
    cents = cents % dime;
    n_nickel = cents / nickel;
    //cents -= (n_nickel*nickel);
    cents = cents % nickel;
    n_penny = cents / penny;
    //cents -= (n_penny*penny);
    cents = cents % penny;
    

    
    cout << "No. of dollars: " << n_dollars << endl;
    cout << "No. of quarters: " << n_quarters << endl;
    cout << "No. of dime: " << n_dime << endl;
    cout << "No. of nickel: " << n_nickel << endl;
    cout << "No. of penny: " << n_penny << endl;
    
    
}