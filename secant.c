// Online C compiler to run C program online
//similar to regula falsi
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#define E 0.0001

float f(float x){
    return x*x*x-4*x+1;
}

int main() {
    int i=0;
    float x0,x1,x2,f0,f1,f2;
    printf("enter the values of x0 and x1.\n");
    scanf("%f %f", &x0, &x1);
    do{
        f0=f(x0);
        f1=f(x1);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        f2=f(x2);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
        i++;
        printf("Number of iterations: %d\n", i);
        printf("Value of root: %f\n", x2);
        printf("Value of function: %f\n",f2);
    }while(fabs(f2)>E);
    return 0;
}