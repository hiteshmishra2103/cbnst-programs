#include <stdio.h>
#include <math.h>
#define EPSILON 0.001

// Define the function outside of main for clarity and reusability
float f(float x) {
    return x*x*x - 4*x + 1;
}

int main(){
    float x0, x1, x2;
    float f0, f1, f2;
    int i = 0;

    printf("Enter the values of x0, x1: ");
    scanf("%f %f", &x0, &x1);
    
    do {
        f0 = f(x0);
        f1 = f(x1);
        
        // Correct calculation of x2
        x2 = (x0 + x1) / 2;
        f2 = f(x2);
        
        // Update x0 or x1 based on the sign of f(x2)
        if(f0 * f2 < 0){
            x1 = x2;
        } else {
            x0 = x2;
        }
        
        i++;
        printf("Iteration: %d\n", i);
        printf("Root: %f\n", x2);
        printf("Value of function: %f\n", f2);
    } while(fabs(x1 - x0) > EPSILON); // Correct termination condition
    
    printf("\n");
    return 0;
}
