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
    //default constructor parameters are sometimes useful in c++ and just need one cons 
    //DEFAULT CONSTRUCTOR PARAMETERS... OVERLOADED CONSTRUCTORS ARE SOMETIMES REPETITIVE... PROTOTYPES
    //Note that the prototype itself has the default parameter during declarations...same like functions default parameters
    Player(string name_val = "None", int health_val = 100, int xp_val = 0);//default during prototyping
    //Player();//if i declare also no args constructor and define the no args constructor, compiler error since ambiguity 

};


//only three arg constructor is defined and enough duing prototyping. so only that is used

Player :: Player(string text,int health_val,int xp_val) : name{text},health{health_val},xp{xp_val}{
    
    cout << "Three args constructor is called" << endl;
    
}

string Player:: get_name(){
    return name;
}



int main(){
        //any number of input arguments can be given. since default parameters are being used...
    Player buddy{"Buddy",65};         
    cout << buddy.get_name() << endl;
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