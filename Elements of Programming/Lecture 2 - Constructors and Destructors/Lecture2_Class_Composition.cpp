// Class composition is when a class contains one or more member variables that are also classes
#include<stdio.h>
#include<stdlib.h>

class Player{
};

class Enemy{
};

class VideoGame{
    private:
    //Class composition
    Player user_hero;
    Enemy enemies[10];
};

// How does construction work when we use class composition:

class Stomach{
    public:
        Stomach() {myGas = 0;}
        void eat() {myGas++;}
        ~Stomach() {printf("Stomach full\n");}
    private:
        int myGas;

};

class Brain{
    public:
        Brain(){myIQ = 100;}
        void think(){myIQ += 10;}
        ~Brain() {printf("Brain overload\n");}
     private:
        int myIQ;
};

class HungryNerd{
    public:
    HungryNerd()
    // Call myBelly's default constructor
    // Call myBrain's default constructor
    {
        myBelly.eat();
        myBrain.think();
    }

    ~HungryNerd(){
        myBelly.eat();
        myBrain.think();
    }
    private:
        Stomach myBelly;
        Brain myBrain;
};

int main(){
    HungryNerd Akhil;
}