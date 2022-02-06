struct exp{
    explicit exp(char  const* x){}
};

void fn(exp x){};

int main(){
    exp x = "ok";
}