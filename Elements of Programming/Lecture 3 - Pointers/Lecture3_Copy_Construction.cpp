#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class Circ
{
private:
    float m_x, m_y, radius;
public:
    Circ(float x, float y, float r){
        m_x = x;
        m_y = y;
        radius = r;
    }
    // Copy constructor
    Circ (const Circ & old){
        m_x = old.m_x;
        m_y = old.m_y;
        radius = old.radius;
    }

    float getArea(){
        return 3.14*radius*radius;
    }
};

int main(){
    Circ circleA(0,0,10);
    float areaA = circleA.getArea();

    Circ circleB(circleA); //Circ circleB = circleA;

    float areaB = circleB.getArea();
    std::cout<<areaB<<std::endl; 

}

// Copy constructor with pointers requires creating new memory
//PiNerd(const PiNerd &src)
//{
//     m_n = src.m_n;
//     m_pi = new int[m_n];
//     for(int i = 0; i<m_n;i++)
//         m_pi[j]=src.m_pi[j];
// }
