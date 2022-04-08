#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//#include "if-else.c"
#define PI 3.14
#define SQUARE(r) r*r //Macro

int main()
{   
    //Pre_define Macros
    printf("File Name is %s\n",__FILE__);
    printf("Today's Date is %s\n",__DATE__);
    printf("Current Time is %s\n",__TIME__);
    printf("Line Number is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    // int var = PI;
    // int r = 7;
    // printf("The area of Circle is %.2f\n", PI * SQUARE(r));
    return 0;
}
