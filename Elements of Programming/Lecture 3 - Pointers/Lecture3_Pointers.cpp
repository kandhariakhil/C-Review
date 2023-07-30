#include<stdio.h>
#include<stdlib.h>

/*
void set(int *px){
    *px = 5; // In the address parsed through, in this case address 9240 set value 5
}

int main(){
    int x = 1; // Variable x with value 1 stored in location say 9240
    set(&x); // Set using value 9240 (address of x)
    printf("%u",x);
}

//Now if we did not use pointers:

void set(int px){
    px = 5;
}

int main(){
    int x = 1; // Variable x with value 1 stored in location 9240
    set(x); //Set value 1 to a new variable px
    printf("%u",x); // Output original value of x, that is 1
}

//
void set(int &val) //val is a ref - passes address of x
{
    val = 5; // Since val points to original variable x, this line actually changed x
}

int main(){
    int x = 1; // lets say address of x is 9240
    set(x); // This statement passes address of x
    printf("%u",x);
}
*/

void swap(int *pa,int *pb){ //*pa indicates get the value stored in 9240 and *pb indicates get the value in 9244
    int tmp_val = *pa;
    *pa = *pb;
    *pb = tmp_val;
}

struct Person
{
    int age;
    int salary;
};

class Circ
{
private:
    float m_x, m_y, m_rad;
public:
    Circ(float x, float y, float r)
    {
        m_x=x;
        m_y=y;
        m_rad=r;
    }
    float getArea(){
        return 3.14*m_rad*m_rad;
    }
};

void printClassInfo(Circ *ptr)
{
    printf("The area is : %f \n",ptr->getArea()); // Can use (*ptr).getArea()
}

int main(){
    int a = 5, b = 6; //a is stored in 9240 and b is stored in 9244
    swap(&a,&b); // Swap 9240 and 9244
    printf("a is %u and b is %u",a,b);

    printf("\nNow let's look at the structure\n");
    Person riddick;
    Person *ptr;

    ptr = &riddick;

    (*ptr).age = 33; // ptr->age = 33;
    ptr->salary=1000; //(*ptr).salary = 1000;

    printf("\nNow let's look at the class\n");
    Circ foo(0,0,10);
    printClassInfo(&foo);

}

