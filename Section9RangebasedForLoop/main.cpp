#include<iostream>
#include<vector>
using namespace std;





int main(){


int scores[] {100,90,80};

cout << "----------Normal For loop based printing---------" << endl;
//normal way to loop and print
for (unsigned int i {0}; i < (sizeof(scores)/sizeof(int)); i++)
    //cout << "It is " << (sizeof(scores)/sizeof(int));
    cout << scores[i] << endl;


//RANGE BASED FOR LOOP A NEW FEATURE ADDED IN C++11
cout << "----------Range For loop based printing---------" << endl;
for (int score : scores)
    cout << score << endl;
    

//AUTO RANGE BASED FOR LOOP A NEW FEATURE ADDED IN C++11
cout << "----------Auto Range For loop based printing---------" << endl;
for (auto score : scores)
    cout << score << endl;


//AUTO RANGE BASED FOR LOOP (Vectors) A NEW FEATURE ADDED IN C++11
cout << "----------Auto Range For loop based printing---------" << endl;

vector<double> marks {98.5,97.2,92.0,89.3};

double sum {0};
double avg {0};

for (unsigned int i{0}; i<(marks.size()); i++)
    sum += marks[i];

if (marks.size() != 0)
    avg = sum/marks.size();

cout <<"Normal for loop avg: " <<"The average is " << avg << endl;


sum = 0;
avg = 0; 
for (auto mark : marks)
    sum += mark;
if (marks.size() != 0)
    avg = sum/marks.size();
cout <<"Range based for loop avg: " <<"The average is " << avg << endl;
    
  

//AUTO RANGE BASED FOR LOOP (Strings) A NEW FEATURE ADDED IN C++11
cout << "----------Auto Range For loop based printing---------" << endl;

for (auto c : "Yatish") // this is a C-style string
    cout << c << endl;
    
    
//Interesting 
for (auto c : "Yatish is a good boy") // this is a C-style string
    if (c != ' ')
        cout << c; // prints without spaces
cout << endl;



//Interesting 
for (auto c : "Yatish is a good boy") // this is a C-style string
    if (c == ' ')
        cout << "\n"; // prints new line replacing spaces
    else 
        cout << c;


//AUTO RANGE BASED FOR LOOP (Initializers) A NEW FEATURE ADDED IN C++11
cout << "\n----------Auto Range For loop based printing---------" << endl;

for (auto val : {1,2,3,4,5})
    cout << val << endl;














}