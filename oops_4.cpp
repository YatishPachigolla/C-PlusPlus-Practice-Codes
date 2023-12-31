#include<iostream>
#include<string>
using namespace std;


class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string text){name = text;}
    string get_name(){return name;}
    
    
    //OVERLOADED CONSTRUCTORS
    //default(no args) constructors: generated by compiler only in the case of no provision of any constructors
    // (but user defined)
    Player(){   //user defined object initialization
        name = "None";
        health = 100;
        xp = 0;
    }
    
    
    
        Player(string name_val,int health_val,int xp_val){   //user defined object initialization
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
    
    
};
  
int main(){
    
    Player frank;
    frank.set_name("Frank");
    cout << frank.get_name()<<endl;
    
    Player hero{"Hero",100,2};  //note that, without the set method itself, i mean irrespective of methods, the private variables can be assigned or accessed only via the constructor methods. No other way. Only remaining way is to create the getters and setters methods in the class..
    cout << hero.get_name()<<endl;
    
}



