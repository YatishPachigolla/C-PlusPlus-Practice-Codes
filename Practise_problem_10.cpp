#include<iostream>
#include<string>
#include<vector>
using namespace std;


void supply_chain(int *ptr_wine,int *ptr_beer,int *ptr_wodka,int wine_needed,int beer_needed,int wodka_needed);


int main(){
    
    
    int n_wine{1000};
    int *ptr_wine {&n_wine};
    int n_beer{1000};
    int *ptr_beer {&n_beer};
    int n_wodka{1000};
    int *ptr_wodka {&n_wodka};
    
    cout << "Hello Sir, Good Morning! What do you like to have?" << endl;
    cout << "We have Wine, Beer and Wodka! Let us know how many each do you need?" << endl;
    
    
    int wine_needed{};
    int beer_needed{};
    int wodka_needed{};
    
    
    cin >> wine_needed >> beer_needed >> wodka_needed;
    
    
    supply_chain(ptr_wine,ptr_beer,ptr_wodka,wine_needed,beer_needed,wodka_needed);
}

void supply_chain(int *ptr_wine,int *ptr_beer,int *ptr_wodka,int wine_needed,int beer_needed,int wodka_needed){
    
    if(*ptr_wine >= wine_needed)
    {
        cout << "Wine Dispensed!" << endl;
        *ptr_wine -= wine_needed;
    }
    else{
        cout << "Sorry Sir, Wine is Out of Stock!" << endl;
    }
    
    if(*ptr_beer >= beer_needed)
    {
        cout << "Beer Dispensed!" << endl;
        *ptr_beer -= beer_needed;
    }
    else{
        cout << "Sorry Sir, Beer is Out of Stock!" << endl;
    }
    
    if(*ptr_wodka >= wodka_needed)
    {
        cout << "Wodka Dispensed!" << endl;
        *ptr_wodka -= wodka_needed;
    }
    else{
        cout << "Sorry Sir, Wodka is Out of Stock!" << endl;
    }
}
