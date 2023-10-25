#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Player{
    //attributes//can also be initialized like this without creating an object yet from c++11
    //this way of ini makes every object of this class get these attributes by default
    string name{"Player"};
    int health{100};
    int xp{30};
    //methods
    void talk(string);  //prototypes
    bool is_dead();
};


class Account{
    //attributes
    string name;
    double balance;
    //methods
    bool deposit(double);
    bool withdraw(double);
    
};


int main(){
    
    
    
    Account Sbi;
    Account Union_bank;
    
    
    
    
    
    
    
    
    
    Player Yatish;
    Player Buddy;
    
    Player *enemy{nullptr}; 
    enemy = new Player;      //creates a new player object on the heap
    
    
    Player players[] {Yatish,Buddy};   // creating array of player objects
    
    vector<Player> player_vec{Yatish};  //collection of player object vectors  //not working properly... 
    player_vec.push_back(Buddy);

    delete enemy;
    
    
    
    
    
    
    
    return 0;
}