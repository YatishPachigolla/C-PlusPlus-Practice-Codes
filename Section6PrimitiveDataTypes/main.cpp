#include<iostream>

using namespace std;

// list initialization benefits in finding the error of overflow... watch the video 47 

int main()
{
    // character data type 
    
    char StartLetter{'Y'};  // single quote only
    cout << "My name starts with " << StartLetter << endl;
    cout << "This letter occupies " << sizeof(StartLetter) << " byte(s)" << endl;

    // integer data type
    
    unsigned short int exam_score_ushi {95};
    cout << "My exam score is " << exam_score_ushi << endl;
    cout << "The unsigned short int occupies " << sizeof(exam_score_ushi) << " byte(s)" << endl;
    
    unsigned int exam_score_ui {95};
    cout << "My exam score is " << exam_score_ui << endl;
    cout << "The unsigned int occupies " << sizeof(exam_score_ui) << " byte(s)" << endl;
    
    
    short int exam_score_shi {95}; 
    cout << "My exam score is " << exam_score_shi << endl;
    cout << "The short int occupies " << sizeof(exam_score_shi) << " byte(s)" << endl;
    
    
    int exam_score_i {95};
    cout << "My exam score is " << exam_score_i << endl;
    cout << "The int occupies " << sizeof(exam_score_i) << " byte(s)" << endl;
    
    signed int exam_score_si {95};
    cout << "My exam score is " << exam_score_si << endl;
    cout << "The signed int occupies " << sizeof(exam_score_si) << " byte(s)" << endl;
    
    signed short int exam_score_sshi {95};
    cout << "My exam score is " << exam_score_sshi << endl;
    cout << "The signed short int occupies " << sizeof(exam_score_sshi) << " byte(s)" << endl;
    
    long people_in_rajahmdunry {4'70'000};
    cout << "The population of Rajahmundry is " << people_in_rajahmdunry << endl;
    cout << "The long int occupies " << sizeof(people_in_rajahmdunry) << " byte(s)" << endl;
    
    long people_in_india {1'00'00'00'000};
    cout << "The population of India is " << people_in_india << endl;
    cout << "The long int occupies " << sizeof(people_in_india) << " byte(s)" << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << "people on earth" << endl;
    cout << "The long long int occupies " << sizeof(people_on_earth) << " byte(s)" << endl;
    
    // floating data type
    
    float car_payment {401.23};
    cout << "My car payment is " << car_payment <<endl;
    cout << "The float occupies " << sizeof(car_payment) << " byte(s)" << endl;
    
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;
    cout << "The double occuipies " << sizeof(pi) << " byte(s)" << endl;
    
    
    long double large {2.7e120};
    cout << "Large value is " << large << endl;
    cout << "The long double occuipies " << sizeof(large) << " byte(s)" << endl;
    
    //boolean type
    
    bool game_over {false};
    cout << "The value of game_over is " << game_over <<endl;
    cout << "The size of boolean variable is " << sizeof(game_over) << " byte(s)" << endl;
    
    
    
    
    
    
    
    
    
    
    
    
}