#include <iostream>
#include<climits>  // watch 48 video
using namespace std;
int main()
{
    int age {};
    bool has_car {};
    cout << "age: " << endl;
    cout << "has_car: " << endl;
    cin >> age >> has_car;
    if(age<16){
        cout << "Sorry, come back in " << (16-age) << " years and be sure you own a car when you come back";
    }
    else{
        if(!has_car)
        cout << "Sorry, you need to buy a car before you can drive";
        else
        cout << "Yes - you can drive!";
    }
}
