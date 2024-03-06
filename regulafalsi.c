#include <stdio.h>
#include <math.h>

#define E 0.001

float f(float x){
    return x*x*x-4*x+1;
}

int main(){
    float x0, x1, x2;
    
    printf("Enter the values of x0 and x1\n");
    scanf("%f %f", &x0, &x1);
    float f0, f1, f2;
    int i = 0;
    
    do{
        i++;
        f0 = f(x0);
        f1 = f(x1);
        // Correct calculation of x2
        x2 = ((f1*x0-f0*x1)) / (f1 - f0);
        f2 = f(x2);
        
        // Correct logic for updating x0 and x1
        if (f0 * f2 < 0) {
            x0 = x2;
            f0 = f2;
        } else {
            x1 = x2;
            f1 = f2;
        }
        
        printf("Number of iterations: %d\n", i);
        printf("Root: %f\n", x2);
        printf("Value of function: %f\n", f2);
         
    } while(fabs(f2) > E);
    
    printf("\n");
    return 0;
}
