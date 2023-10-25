#include<iostream>
#include<cstdlib>   //required for rand()
#include<ctime>     //required for time()


//NOTE THAT FOR STATISTICAL PROCESSING and precise distributions, RANDOM HEADER FILE.


using namespace std;

int main(){
    
    int random_number{};
    size_t count {10}; // number of random numbers to generate
    int min{1};    //inclusive
    int max{6};    //inclusive
    
    
    //seed the random number generator
    //If you don't seed the generator, you will get the same sequence of random numbers every run
    
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); //seeding...
    
    
    for (size_t i {1}; i<= count ; ++i){
        random_number = rand() % max + min; //to gen a random number between [min,max]
        cout << random_number << endl;
}
    cout << endl;
    return 0;
    
}

 