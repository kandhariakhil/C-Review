#include<stdio.h>
#include<stdlib.h>
#include<iostream>

template <typename Item>
void swap(Item &a, Item &b){
    Item temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename Item1, typename Item2>
Item1 printFunction(Item1 &a, Item2 &b){
    std::cout<<"In print function "<<a<<" "<<b<<std::endl;
    return a;
}

class Dog{
    public:
        Dog (int weight){
            m_weight = weight;
        }
        int getWeight() const{
            return m_weight;
        }

    private:
        int m_weight;
};

int main(){
    int a = 10, b = 20;
    std::cout<<a<<" "<<b<<std::endl;
    swap(a,b);
    std::cout<<a<<" "<<b<<std::endl;

    char c = 'A', d = 'B';
    std::cout<<c<<" "<<d<<std::endl;
    swap(a,b);
    std::cout<<c<<" "<<d<<std::endl;

    int e = 100;
    char f = 'A';
    int returnItem = printFunction(e,f);
    std::cout<<"Returned type: "<<returnItem<<std::endl;

}