#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int  numberofarguments = argc;

    float a = 3.33;
    float b= 2.22;
    float area ;
    float perimeter;

    area = a*b;
    printf("%f %f %f\n",a, b,area);

    perimeter=2*(a+b);
    printf("%f\n",perimeter);
    return 0;
}
