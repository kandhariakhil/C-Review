#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

const double PI = 3.14159;

class Shape
{
private:
    /* data */
public:
    Shape(){};

    virtual double getArea(){
        return (0);
    }
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

void PrintPrice(Shape &x){
    cout<<"Cost is: $"<<x.getArea()*3.25<<endl; //3.25 per sq. inches
}

void PrintArea(Shape *x){
    cout<<"Area is: "<<x->getArea()<<" sq. inches"<<endl; //in sq. inches
}

int main(){
    Shape sh;
    Square s(5);
    Circle c(10);

    PrintPrice(s);
    PrintPrice(c);
    PrintPrice(sh);
}