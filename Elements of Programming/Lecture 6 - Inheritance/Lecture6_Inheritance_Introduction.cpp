#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class Robot
{
private:
    int m_x, m_y, m_battery;

    //This method is hidden from the derived class
    void setBaseBattery(int newBattery){
        m_battery = newBattery;
    }
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

    virtual void moveRobot(){
        printf("Robot will move 10 steps \n");
    }

protected:
    void chargeBattery(){
        printf("Battery is charging \n");
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

    void setPosition(int xPos, int yPos){
        setX(xPos);
        setY(yPos);
    }

    // The following lines will not run since the method setBaseBattery is private
    // void setDerivedBattery(int battery){
    //     setBaseBattery(battery); 
    // }

    // Since chargeBattery in robot is protected, base class can use it.
    void chargeRobot(){
        chargeBattery();
    }

    virtual void moveRobot(){
        printf("Shielded robot will move 5 steps \n");
    }

    // Calling the base class version of moveRobot instead of derived class version
    void boostMoveRobot(){
        printf("Robot has achieved boost and will move faster - ");
        Robot::moveRobot();
    }

};

int main(){
    Robot robo;
    shieldedRobot roboShielded;
    roboShielded.setX(5);
    roboShielded.setShield(10);
    int roboX = roboShielded.getX();
    int roboS = roboShielded.getShield();

    printf("Shield is %d and X position is %d \n", roboS, roboX);

    roboShielded.setPosition(10,40);

    roboX = roboShielded.getX();
    int roboY = roboShielded.getY();

    printf("X position is %d and Y position is %d \n", roboX, roboY);

    roboShielded.chargeRobot();

    // Virtual functions showcasing extension
    robo.moveRobot();
    roboShielded.moveRobot();
    roboShielded.boostMoveRobot();

    // The following line will still fail
    // robo1.chargeBatter();
}

