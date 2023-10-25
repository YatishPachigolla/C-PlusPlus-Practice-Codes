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


//USING CONSTRUCTOR INITIALIZATION LISTS
//They are actual initializations but not assignments
Player:: Player():name{"None"},health{100},xp{0}{
    
}

Player:: Player(string text):name{text},health{100},xp{0}{
    
}
Player:: Player(string text,int health_val,int xp_val):name{text},health{health_val},xp{xp_val}{
    
}

string Player:: get_name(){
    return name;
}



int main(){
    
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