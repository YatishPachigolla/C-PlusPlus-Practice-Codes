#include <iostream>

int main()
{
    int fav_num;
    std::cout << "Enter your favorite number between 1 and 100:"; 
    std::cin >> fav_num;
    //std::cout << "Amazing! That's my favorite number too!" << std::endl;
    //std::cout << "No really!!, " << fav_num << " is my favorite number!" << std::endl;
    std::cout << "Nice! It's " << fav_num << "\n" << "My fav too!" << std::endl; 
    return 30;
    }