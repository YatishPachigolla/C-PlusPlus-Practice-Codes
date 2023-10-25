#include<iostream>
using namespace std;

class Shape{ //abs base class
private:

public:
        //pure virtual functions
        virtual void draw() = 0;
        virtual void rotate() = 0;
        virtual ~Shape(){};
};



class Open_Shape:public Shape{ //abs class
private:

public: //have not overridden the pure virtual functions from the abs base class... so still this is abstract class...
    virtual ~Open_Shape(){}
}; 


class Closed_Shape:public Shape{ //abs class
private:

public: //have not overridden the pure virtual functions from the abs base class... so still this is abstract class...
    virtual ~Closed_Shape(){}
};





class Line:public Open_Shape{ //concrete class
private:

public:
       
        virtual void draw() override{ cout << "Drawing a line" << endl;}
        virtual void rotate() override{ cout << "Rotating a line" << endl;}
        virtual ~Line(){};
};

class Circle:public Closed_Shape{ //concrete class
private:

public:
       
        virtual void draw() override{ cout << "Drawing a Circle" << endl;}
        virtual void rotate() override{ cout << "Rotating a Circle" << endl;}
        virtual ~Circle(){};
};


class Square:public Closed_Shape{ //concrete class
private:

public:
       
        virtual void draw() override{ cout << "Drawing a Square" << endl;}
        virtual void rotate() override{ cout << "Rotating a Square" << endl;}
        virtual ~Square(){};
};






int main(){
    
    // Since they are abstarct classes, no object can be instantiated and that is taken care by the pure virtual function
    
    //Shape s;
    //Open_Shape os;
    //Closed_Shape cs;
    //Shape *ptr_s = new Shape();
    //Open_Shape *ptr_os = new Open_Shape();
    //Closed_Shape *ptr_cs = new Closed_Shape();
    
    
    Circle c;
    c.draw();  //static binding
    
    
    //Using a base class pointers
    //does dynamic binding for base class pointers  
    Shape *ptr_c = new Circle();   //works and does also dynamic binding
    ptr_c->draw();
    
    
    
    
}