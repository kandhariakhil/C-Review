#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class Circ
{
private:
    float m_x, m_y, m_rad;
public:
    Circ(float x, float y, float rad){
        m_x = x;
        m_y = y;
        m_rad = rad;
    }
    
    // Assignment operator
    // function name is operator=
    // function return type is a reference to the class Cric &
    // function returns *this when it's done
    Circ &operator = (const Circ &src) 
    {
        m_x = src.m_x;
        m_y = src.m_y;
        m_rad = src.m_rad;
        return *this;
    }

    float GetArea(){
        return 3.14159*m_rad*m_rad;
    }
};

int main(){
    Circ foo(1,2,10);
    Circ bar(4,5,5);

    float area_bar = bar.GetArea();

    std::cout<<"Bar area was: "<<area_bar<<std::endl;

    bar = foo;

    area_bar = bar.GetArea();

    std::cout<<"Bar area is: "<<area_bar<<std::endl;
}

// Copy constructor with pointers requires creating new memory
//PiNerd(const PiNerd &src)
//{
//     delete []m_pi;
//     m_n = src.m_n;
//     m_pi = new int[m_n];
//     for(int i = 0; i<m_n;i++)
//         m_pi[j]=src.m_pi[j];
//     return *this;
// }


