// Challenge 1 - Write a quadratic equations class
#include<stdio.h>
#include<stdlib.h>
class Quadratic
{
public:
    Quadratic(float a, float b, float c);
    float Evaluate(float x);
    ~Quadratic();
private:
    float a, b, c;
};

Quadratic::Quadratic(float c1, float c2, float c3)
{
    a = c1;
    b = c2;
    c = c3;
}

float Quadratic::Evaluate(float x){
    return a*x*x+b*x+c;
}

Quadratic::~Quadratic()
{
    printf("Goodbye!");
}

int main(){
    float out;
    Quadratic quad(4,3,5);
    out = quad.Evaluate(2);
    printf("%0.1f\n",out);
}

//Challenge 2 - Write a class equation, every equation has it's own special quadratic equation - specify c1 and c2.

// Advanced class composition where the member variable requires parameter for construction.
class Equation
{
private:
    Quadratic QE;
public:
    Equation(float c1, float c2, float c3 = 0)
    : QE(c1,c2,c3){}
    double getMyValue(double x){
        return QE.Evaluate(x);
    }
    ~Equation();
};
