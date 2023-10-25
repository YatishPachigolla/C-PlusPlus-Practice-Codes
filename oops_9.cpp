
//Create this also for account class.. very good


#include<iostream>
#include<vector>
#include<string>

using namespace std;

 
class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    
    //constructor: default parameter 
    
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0); //prototype
    
    //copy constructor
    
    Player(const Player &source); //prototype
    
    //destructor
    
    ~Player(){
        cout << "Destructor for " + name << " is called " << endl;
    }
  
    
};
  
//constructor definition
Player :: Player(std::string name_val,int health_val,int xp_val) :
            name{name_val},health{health_val},xp{xp_val}{
                cout << "Three args constructor is called for " + name << endl;
}
//copy constructor definition
Player :: Player (const Player &source) :
            name{source.name},health{source.health},xp{source.xp}{
                cout << "copy constructor is called for " + name << endl;
}

//non-member method or regular function

void display(Player p){
    cout << "The name of the object is " << p.get_name() << endl;  //p.get_name is not possible since name is private attribute
    cout << "The health of the object is " << p.get_health() << endl;
    cout << "The xp of the object is " << p.get_xp() << endl;
}




int main(){
    
    Player frank{"Frank",100,20};
    Player duplicate_frank{frank};
    
    display(frank);
    
    
    
}