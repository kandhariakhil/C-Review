//Takes two parameters to initialize it.
#include<stdio.h>
#include<stdlib.h>

class CalculateFPH
{
public:
    CalculateFPH(int age, bool frames)
    {
        m_age = age;
        m_frames = frames;
    }

    CalculateFPH()
    {
        m_age = 0;
        m_frames = false;
    }

    int getFPH()
    {
        if (m_frames == true)
            return(100);
        return (3*m_age);
    }

    // Destructors do not have any parameters
    // Destructors must not return any value

    ~CalculateFPH()
    {
        // Destructor code goes here
        for (int i=0;i<5;++i)
            printf("Destructor has been reached\n");
    }

private:
    int m_age;
    bool m_frames;
};

int main()
{
    // A constructor is called any time you create a new  variable of a class
    CalculateFPH Frames(2,false); //This variable initialization goes to the first constructor
    CalculateFPH FramesNoInit; //This variable goes to the second constructor since it requires no parameters

    int out = Frames.getFPH();
    printf("%d\n", out);
    // CalculateFPH arr[52]; -> A constructor is called N times (once for each array element)

    // CalculateFPH *ptr = new CalculateFPH(1,false); -> A constructor is called when new is used to dynamically allocate a new variable

    // CalculateFPH *justAPtr; -> Constructor is not called when one defines just a pointer variable

    // Having more than one constructor is called constructor overloading
}