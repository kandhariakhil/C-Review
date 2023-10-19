#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class Dog{
    public:
        Dog (int weight){
            m_weight = weight;
        }
        int getWeight() const{
            return m_weight;
        }

        // Comparison operator inside of class:
        bool operator <(const Dog &other){
            if(m_weight<other.m_weight){
                return true;
            }
            else{
                return false;
            }
        }
    private:
        int m_weight;
};

// Comparison operator outside of class:
bool operator >= (const Dog &a, const Dog &b){
    if(a.getWeight()>=b.getWeight()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Dog Rambo(6), Riddick(60);
    if(Riddick>=Rambo){
        std::cout<<"Riddick is bigger than Rambo"<<std::endl;
    }

    Dog Lucy(4);
    if(Rambo<Lucy){
        std::cout<<"Rambo is smaller than Lucy"<<std::endl;
    }
    else{
        std::cout<<"Lucy is smaller than Rambo"<<std::endl;
    }
}
