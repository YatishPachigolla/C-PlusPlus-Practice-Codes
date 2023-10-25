//unlike cstrings, c++ strings are dynamic in size during run time. can be easily converted to c style strings easily. also many familiar operators can be used comfortably unlike cstrings. 
//like in case of vectors, c++ strings provide bounce checking functions and so are safer...


// Watch 98 video for examples... all c++ string style examples are shown in a simple manner...

//also insert function in c++ style strings

#include<iostream>
#include<string>
//#include<iomanip> 
using namespace std;

//unlike C strings, c++ strings are always initialized. No problem of garbage and all..
int main(){
    
    //DECLARING AND INITIALIZATIONS
    
    string s1; //Empty... unlike c style we dont have garbage here for this kind of declaration
    string s_1{}; //Empty also works
    string s2 {"Yatish"}; //Cstyle string literal.. vl be converted to c++ style
    string s3 {s2}; // copy of s2 string in s3
    string s4 {"Frank",3};  //Fra
    string s5 {s3,0,2}; //Fr //the first value rep the starting index and the second value represents the length
    string s6 (3,'X'); // XXX this is a constructor syntax and have () instead of {}
    
    //Assignment
    
    string sr1; //empty
    sr1 = "C++ Rocks!";  //note this assignment works in c++ style but not in c style
    cout << sr1 << endl;
    string sr2 {"Hello"};
    cout << sr2 << endl;
    sr2 = sr1; //assignment
    cout << sr2 << endl;
    
    
    
    //concatenation
    
    string p1 {"C++"};
    string p2 {"is a powerful"};
    string sentence;
    string sentence_2;
    
    sentence = p1 + " " + p2 + " language"; //p2 is a c++ style and language is a c style string.. they can be concatenated
    cout << sentence << endl; 
   //sentence_2 = "C++" + " is a powerful" + " language";  //illegal... since they are c style strings, they cannot concatenate with an addition operator
    cout << sentence_2 << endl;
   
    cout << "\n----------------------------------------------------" << endl;
    
    //Accessing chracters [] and at() method
    
    //string w1;
    
    string w2{"Yatish"};
    
    cout << w2[0] << endl;  // Y
    cout << w2.at(0) << endl; //Y note that at method perform bounds checking same like in the case of vectors
    w2[0] = 'S';
    w2.at(1) = 'u';
    cout << w2 << endl;
    
    
    
    cout << "\n----------------------------------------------------" << endl;
    
    // printing the characters of a string using range based for loop
    
    string s {"Yatish"};
    
    
    cout << "char type: " << endl;
    
    for(char c : s)              //char
        cout << c << endl;
    
    cout << "int ascii type: " << endl;
    for(int c : s)              //ascii int  eq to the character
        cout << c << endl;       //should this print 0 for null character as well?
        
    
    cout << "auto type: " << endl;
    for(auto c : s)              //auto considers char type
        cout << c << endl;
    
    
    
    cout << "\n----------------------------------------------------" << endl;
    
    //String comparisons can be done between one c++ style string and one c style string or two c++ strings.
    // But not between two c type string literals // see 97 video for clarity 
    
    string st1 {"Apple"};
    string st2 {"Banana"};
    string st3 {"Kiwi"};
    string st4 {"apple"};
    string st5 {s1};
    
    
    cout << (st1 == st5) << endl;
    cout << (st1 == st2) << endl;
    cout << (st1 != st2) << endl;
    cout << (st1 < st2) << endl;
    cout << (st2 > st1) << endl;
    cout << (st4 < st5) << endl;
    cout << (st1 == "Apple") << endl;
    
    
    
    
    cout << "\n----------------------------------------------------" << endl;
    
    //Substring methods
    
    string ss {"This is a test"};
    
    cout << ss.substr(0,4) << endl; // start_index,length
    
    //find a string
    
    
    cout << ss.find("This") << endl;
    cout << ss.find("is") << endl;
    cout << ss.find("test") << endl;
    cout << ss.find('e') << endl;
    cout << ss.find("is",4) << endl;   //start index of the search
    cout << ss.find("XX") << endl;  //npos... use case of npos is in video 98.
    
    //erase and clear methods
    
    cout << ss.erase(0,5) << endl; // is a test //start index and length
    cout << ss.erase(5,4) << endl; // is a 
    ss.clear(); //empties string ss  //no garbage in C++ style as we know.
    cout << ss << endl;
    
    
    //Length and assignment concatenation methods
    
    string sj {"Yatish"};
    
    cout << sj.length() << endl;  // not available in c style strings since info about the size of string is not available in C style strings
    
    sj += "Pachigolla";   //note sj is a c++ string type but Pachigolla is a C style string
    
    cout << sj << endl;
    
    //getline 
    
    /*
    string skl;
    cout << "without getline" << endl;
    cin >> skl;  //give Yatish Pachigolla
    cout << skl << endl;  //prints Yatish
    
    //getlines don't work here... donno why?
    
    string skl1;
    cout << "with getline" << endl;
    getline(cin,skl1); //reads the entire line till \n
    cout << skl1 << endl;
    
    string skl2;
    cout << "with getline and delimiter" << endl;
    getline(cin,skl2,'2'); //when 2 is seen, it is discarded from there...    
    cout << skl2 << endl;
    */
    
    
    
    
    
    
    
    
    //
    
    string entry_1 {"Newton"};
    
    string entry_2 {"Leibniz"};
    
    cout << (entry_1 > entry_2) << endl;
    if(entry_1 > entry_2)
        entry_2.swap(entry_1);
        
    cout << entry_1 << "\n" << entry_2 << endl;
    
    
}