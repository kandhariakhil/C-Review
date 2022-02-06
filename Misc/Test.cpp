#include<iostream>
void a(int x){
    x++;
}

void b(int* x){
    x+= 2;
}
void c(int& x){
    x+= 4;
}

int main(){
    int x = 0;
    int *xPtr = &x;
    a(x);
    b(xPtr);
    c(x);

    std::cout<<x<<'\n';
}