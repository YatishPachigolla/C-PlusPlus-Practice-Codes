#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    string get_name();
    //OVERLOADED CONSTRUCTORS... PROTOTYPES
    Player();
    Player(string text);
    Player(string text, int health_val,int xp_val);
};


//DELEGATING CONSTRUCTORS
//They help in removing the duplicate code

Player :: Player() : Player{"None",100,0}{
    
    cout << "No args constructor is called" << endl;

}

Player :: Player(string text) : Player{text,100,0}{
    
    cout << "One-arg constructor is called" << endl;
    
}
Player :: Player(string text,int health_val,int xp_val) : name{text},health{health_val},xp{xp_val}{
    
    cout << "Three args constructor is called" << endl;
    
}

string Player:: get_name(){
    return name;
}



int main(){
    
    //Player buddy{"Buddy",65};         //constructor for this is not specified..
    Player frank;
    cout << frank.get_name() << endl;
    Player hero{"Hero"};  //assignements done to the private attributes via the constructor initialization..
    cout << hero.get_name() << endl;  //to fetch we need such public interface method...since they are private..
    Player villian{"Villian",78,3};
    cout << villian.get_name() << endl;
    Player *enemy = new Player("Enemy"); //creating an object on heap with string text initialization constructor
    cout << (*enemy).get_name() << endl;
    delete enemy;
    
}