#include<iostream>
//here all the needful functions are defined and then used by the main, so no compiler issues. But in general, to avoid
// such problems, and for ease of programming, function prototypes are used using which, function definitions 
//can be placed anywhere in the source file.
using namespace std;

//function prototypes, they as well need not follow any order during declarations... types are very imp for compiler to understand...

double calc_area_circle(double radius); // just type is also sufficient to provide...

double calc_volume_cylinder(double radius, double height); // just type is also sufficient to provide...

void area_circle();

void volume_cylinder();




const double pi {3.14159};

int main(){
    area_circle();
   volume_cylinder();
}

//now functions are defined after the main, but compiler doesn;t show any error since prototypes are given already

double calc_area_circle(double radius){
    
    return (pi*radius*radius);
    
}

double calc_volume_cylinder(double radius, double height)
{
    
    return (calc_area_circle(radius)*height);
}

void area_circle(){
    double radius{};
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;
    cout << "The area of the circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "Enter the radius of the cylinder: " << endl;
    cin >> radius;
    cout << "Enter the height of the cylinder: " << endl;
    cin >> height;
    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius,height) << endl;
}

