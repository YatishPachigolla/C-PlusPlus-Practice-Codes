#include<iostream>
using namespace std;
int main(){
    char vowels[] {'a','e','i','o','u'};
    cout << "the first vowel is " << vowels[0] << endl;
    cout << "the last vowel is " << vowels[4] << endl;
    
    //cin >> vowels[0];
    //cout << "the first vowel is " << vowels[0] << endl;
    
    //cin >> vowels[6];  // out of bound for vowels array.. for some os it may crash
    //cout << "the out of bound vowel is " << vowels[26] << endl;
    
    
    double temp[] {78.2,34.5}; // declaring and initializing
    temp[0] = 23.5;    // assigning 
    cout << temp[0]<<endl;  // accessing
    
    
    
    int test_scrores[5]{}; // empty init list means setting all the elements of the array to 0
    cout << test_scrores[0] << endl;
    cout << test_scrores[1] << endl;
    cout << test_scrores[2] << endl;
    cout << test_scrores[3] << endl;
    cout << test_scrores[4] << endl;
    
    //IMPORTANT
    //int test[]; this is invalid...coz there is no init list to know the array size for the compiler
    //int test[8];  // good... but due to no init list, the elements are junk
    //int test[8] {1,2}; //1st and 2nd elements are 1 and 2 but all remaining are zeros
    //int test[8]{12}; //1st element is 12 but all remaining are zeros
    
    cout << "The test scores name gives the location of the index 0 of the test_scores " << test_scrores<< endl;
    
    
    //MULTIDIMENSIONAL ARRAYS
    
    int movie_rating[2][2]{{1,2},{3,4}};
    cout << movie_rating[1][1] << endl;
    cout << movie_rating[0][0] << endl;  
    cout << movie_rating[0] << endl;   // what address this gives?
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }