#include <iostream>
#include<cstring> //c style string functions
#include<cstdlib> //converts c style strings to int, float, long, etc. 
using namespace std;
int main()
{
 //all c style strings work with null termination concept... 
    
     char sentence[]{"C++ is fun"}; //null terminated automatically
     
     cout << sentence << endl;
     cout << sentence[0] << endl;//c
     cout << sentence[1] << endl;//+
     cout << sentence[2] << endl;//+
     cout << sentence[3] << endl;//space
     cout << sentence[4] << endl;//i
     cout << sentence[5] << endl;//s
     cout << sentence[6] << endl;//space
     cout << sentence[7] << endl;//f
     cout << sentence[8] << endl;//u
     cout << sentence[9] << endl;//n
     cout << sentence[10] << endl;  //out of bounds... but no error //null character place
     //cout << sentence[11] << endl;  // out of bounds.. but no error // beyond the null character
     
     
     sentence[4] = 'u';       //Possible
     cout << sentence << endl;   
     //sentence[10] = 'Y';  // null character index // since null termination is replaced, potential problems occur.. but no compile errors..
     //sentence[11] = 'Y';  //beyond null character
     //SO, we cannot add any characters additional to string since null termination is spoiled...
     //cout << sentence << endl;
     
     //In this way u can add additional characters to the string....
     
     
     char my_name [7]{"Yatish"};  //usually needed one extra for null character. If used 6 here, its a compile error
     cout << my_name << endl;
     
     char my_name_ext [8] {"Yatish"};//two null characters are formed 
     cout << my_name_ext << endl;
     //now i can insert one character additional to the string since null charcater is still available
     my_name_ext[6] = 'u'; //1st null character index is replaced/added with new literal...
     cout << my_name_ext << endl;
     
     
     
     char my_nick_name[8]; //no ini is problematic since null character is not guaranteed
     cout << "Nickname: " << my_nick_name << endl; //how to print when null ch is not guaranteed...
     strcpy(my_nick_name,"Buddy"); //works //from cstring library
     cout << "Nickname sorted: " << my_nick_name << endl;
     
     char my_new_name[8]{"Buddy"}; 
     //my_new_name = "Yatish";   //Error//such ini doesn't work... due to location error with the name of the array
     strcpy(my_new_name,"Yatish"); //works //from cstring library
     
     cout <<"My new name: " << my_new_name << endl;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}

