#include<stdio.h>

enum months{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void){
    enum months month; //Can contain any of the 12 months

    const char *monthName[] = {"","January","February","March","April","May",
                                "June","July","August","September","October",
                                "November","December"};

/*The following code does not work in VSCODE Compiler, try at https://www.tutorialspoint.com/compile_c_online.php */
    
    
    // for(month=JAN;month<=DEC;month++) {
    //     printf("%2d%11s\n",month,monthName[month]);
    // }

    return 0;
}