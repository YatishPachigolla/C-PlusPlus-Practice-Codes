
//VERY IMPORTANT TO UNDERSTAND THIS CODE


 #include<iostream>
 #include<vector>
 #include<string>
 
 using namespace std;
 
class Player{
private:   //only way to create objects with particular name and private attributes specified is using the constructors (overloaded)
    string name;
    int health;
    int xp;
public:
    void set_name(string text){name = text;}
    
    //Overloaded Constructors..NOT IMPLEMENTED
    //not that the cons are not completely defined. they take inputs but the assignment is not written in the methods.
    Player(){cout << "No args constructor is called" << endl;}  //default by c++ if not provided anything
    Player(string name){cout << "String arg constructor is called for " << name << endl;}
    Player(string name,int health,int xp){cout << "Three args constructor is called for " << name << endl;}
    ~Player(){cout << "Destructor is called for "<< name << endl;} //DESTRUCTOR
    
 };
 
 int main()
 {
     //constructors are called whenevr we create an object
    Player frank;//just called...
    frank.set_name("frank");
    Player hero{"Yatish"};//just called.. these are not assigned here coz the methods are not defined fully...
    hero.set_name("yatish");
    //cout << "------------"<<hero.name<<"--------------"<< endl;
    Player villian{"Rocky",87,5};//just called
    villian.set_name("rocky");
    //Player pandian{"Yatish",87};  constructor for this is not defined. so, error.
    //Destructors are automatically called...but in a reverse order of creation
    
    Player *enemy = new Player;
    enemy -> set_name("Enemy");
    delete enemy;   //for pointer based, destructors are not automatically called unlike for normal objects 
    Player *boss = new Player("Boss",99,35);
    boss -> set_name("Boss");
    delete boss;
 
 
 
 
 
 
 
 
 
 
 }