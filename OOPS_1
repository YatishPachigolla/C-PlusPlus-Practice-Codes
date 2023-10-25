#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //from c++11, initialization right in the class is possible...
public:
    //attributes
    //string name;  //c++11 string formats is needed. somehow this is not properly supported...  
    int health;
    int xp; 
    //methods (function prototypes)
    void talk(string text_to_say){cout << "My health is" << health << "says" << text_to_say<<endl;};
    bool is_dead();
};
class Account{
    
public:
    //attributes    
    //string name;
    double balance;
    //methods (function prototypes)
    void deposit(double bal){balance += bal; cout << "In deposit"<<endl;}
    void withdrawl(double bal){balance -= bal;cout << "In withdraw"<<endl;}
};

int main()
{
    
    
    Account frank_account;
    frank_account.balance = 1000;
    frank_account.deposit(2000);
    frank_account.withdrawl(200);
    cout << frank_account.balance << endl;
    
    
    Account *jim_account = new Account();
    (*jim_account).balance = 2700;
    jim_account->deposit(3000);
    jim_account->withdrawl(1000);
    delete jim_account;
    
    
    Player frank;
    //accessing class members
    //frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("HI");
    Player hero;
    
    
    Player players[] {frank,hero}; //array of player objects
    vector <Player> player_vec {frank}; //vector of player object
    player_vec.push_back(hero);
    
    
    Player *enemy_ptr = nullptr;
    enemy_ptr = new Player();
    
    
    delete enemy_ptr;
    
}