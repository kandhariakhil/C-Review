#include<stdio.h>
#include<stdlib.h>
#include<iostream>

template <typename Item>
class HoldOneValue
{
private:
    Item m_a;
public:
    void setVal(Item a){
        m_a = a;
    }

    void printTenTimes(){
        for(int i=0;i<10;i++){
            std::cout<<m_a<<std::endl;
        }
    }
};

int main(){
    HoldOneValue<int> integerType;
    integerType.setVal(10);
    integerType.printTenTimes();

    HoldOneValue<char> charType;
    charType.setVal('A');
    charType.printTenTimes();
}

