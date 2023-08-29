#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class Robot
{
private:
    int m_x, m_y;
public:
    Robot(){
        m_x = 0;
        m_y = 0;
    }

    void setX (int newX){
        m_x = newX;
    }

    void setY (int newY){
        m_y = newY;
    }

    int getX(){
        return m_x;
    }

    int getY(){
        return m_y;
    }
};

class shieldedRobot : public Robot
{
private:
    int m_shield;
public:
    shieldedRobot(){
        m_shield = 0;
    }

    int getShield(){
        return m_shield;
    }

    void setShield(int s){
        m_shield = s;
    }
};

int main(){
    shieldedRobot robo1;
    robo1.setX(5);
    robo1.setShield(10);
    int roboX = robo1.getX();
    int roboS = robo1.getShield();

    printf("Shield is %d and X position is %d \n", roboS, roboX);

}

