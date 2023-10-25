

// Study all possible vector methods and implement them... 

#include<iostream>

#include<vector>  // for vectors

using namespace std;

int main(){
    //vector<char>vowels;  //empty, size is zero
    //vector<char>vowels(5); //size declared, and are initialised to zero by default
    vector<char>vowels{'a','e','i','o','u'};
    
    cout<<vowels[0]<<endl; //this accessing using subscript doesn't do bound checking in vectors as well.
    
    //vector<int>test_scores(3); //all 3 initialised to zero
    //vector<int>test_scores(3,100); // all 3 initialised to 100
    vector<int>test_scores{100,95,90};//general array style initialization
    
    //array style print out
    cout<<"Array style accessing"<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;
    cout<<test_scores[3]<<endl; //no bounce check by compiler... user has to check
    
    //vector style printout, benefits in bound checking
    cout<<"Vector style accessing"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    //cout<<test_scores.at(3)<<endl; //bounce checks by the compiler and throws an exception error.. exception handling needed
    cout<<"There are " << test_scores.size() << " scores in the vector" << endl;
    
    //Let us try inputting in vector style
    cout << "Change the first element of the vector to another value " << endl;
    cin >> test_scores.at(0);
    cout<<"The updated test scores are "<< endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    
    cout << "Add new test scores" << endl;
    int score_to_add {0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    cout<<"The new list of test scores are "<< endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<"The size of the test scores vector now is " << test_scores.size()<<endl;
    //cout<< test_scores[10]<<endl;//no exception since no bound checking
    //cout<<test_scores.at(10)<<endl; // exception error
    
    
    //MULTIDIMENSIONAL VECTORS
    
    vector<vector<int>> movie_ratings 
    {
        {1,2,3,4},
        {2,4,5,1},
        {6,8,8,4}
    }; // a matrix of size 3*4 is created in vector style, each row is a reviewer

    cout<<"Access the ratings from the reviewer 1 in array style" << endl;
    //cout<<movie_ratings[0]<<endl; // gives an error
    cout<<movie_ratings[0][0]<<endl;
    cout<<movie_ratings[0][1]<<endl;
    cout<<movie_ratings[0][2]<<endl;
    cout<<movie_ratings[0][3]<<endl;
     
    
    
    cout<<"Access the ratings from the reviewer 1 in vector style" << endl;
    //cout<<movie_ratings.at(0)<<endl; //gives an error
    movie_ratings.at(0).at(0) = 23;
    cout<<movie_ratings.at(0).at(0)<<endl;
    cout<<movie_ratings.at(0).at(1)<<endl;
    cout<<movie_ratings.at(0).at(2)<<endl;
    cout<<movie_ratings.at(0).at(3)<<endl;
    
}