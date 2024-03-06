#include <stdio.h>
#define E 0.001
float f(float x){
    return x*x*x-4*x+1;
}

float df(x) {
    return 3*x*x-4;
}
int main(){
    float x0, x1, f0,f1,df0;
    int i=0;
    printf("Enter the value of x0:");
    scanf("%d", &x0);
    do{
        f0=f(x0);
        x1=x0-(f(x0)/df(x0));
        f1=f(x1);
        x0=x1;
        i++;
        
        printf("No. of iteration: %d", i);
        printf("root=%f\t", x1);
        printf("Value of function=%f\n", f1);
    }while(fabs(f1)>E);
    printf("\n");
    return 0;
}