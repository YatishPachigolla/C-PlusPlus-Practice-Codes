#include<iostream>
#include<stdio.h>
using namespace std;


struct Rectangle{
    
    int length;
    int breadth;
    char x;     //in struct it takes 4 bytes... padding
    
};

Rectangle rec; //accessible for all the functions

int main(){
    
    Rectangle rec1;
    rec1.length = 2;
    rec1.breadth = 6;
    Rectangle rec2{10,5,'y'};
    printf("%llu\n",sizeof(rec1));
    cout << rec1.x << endl;
    cout << rec1.length << endl;
    cout << rec1.breadth << endl;
    printf("%llu\n",sizeof(rec2));
    cout << rec2.x << endl;
    cout << rec2.length << endl;
    cout << rec2.breadth << endl;
    
    int v;
    char c;
    cout << "Int size: " << sizeof(v) << endl;
    cout << "Char size: " << sizeof(c) << endl;  //in general, one byte...


}