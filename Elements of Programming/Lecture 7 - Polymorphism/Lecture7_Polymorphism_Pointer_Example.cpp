#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

const double PI = 3.14159;
// Lets make shape an ABC

class Shape
{
private:
    /* data */
public:
    Shape(){};

    virtual double getArea() = 0; // This is a pure virtual function making the class an ABC

    ~Shape(){};
};

class Square : public Shape
{
    private:
        int m_side;
    public:
        Square(int side){
            m_side = side;
        };
        virtual double getArea(){
            return m_side*m_side;
        }
        ~Square(){};
};

class Circle : public Shape
{
    private:
        int m_rad;
    public:
        Circle(int rad){
            m_rad = rad;
        };
        virtual double getArea(){
            return PI*m_rad*m_rad;
        }
        ~Circle(){};
};

double getArea(Shape &x){
    return x.getArea(); 
}

int main(){
    Square sq(5); //subclass variable
    Circle cr(10); //subclass variable

    char choice;

    Shape *ptr; //superclass pointer

    cout<<"Pick (s)quare or (c)ircle"<<endl;
    cin>>choice;
    if(choice == 's'){
        ptr = &sq;
    }
    else if (choice == 'c'){
        ptr = &cr;
    }
    else{
        cout<<"Invalid Selection";
    }

    cout<<"Shape's area is: "<<ptr->getArea()<<endl;
    
}

