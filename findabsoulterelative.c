#include<stdio.h>
#include<math.h>

int main() {
    float abserror, relerror, percerror, trueval, approxval;
    
    printf("Enter the true value: ");
    scanf("%f", &trueval);
    
    printf("Enter the approximate value: ");
    scanf("%f", &approxval);
    
    abserror = fabs(trueval - approxval);
    relerror = abserror / trueval;
    percerror = relerror * 100;
    
    printf("Absolute error = %f\n", abserror);
    printf("Relative error = %f\n", relerror);
    printf("Percentage error = %f\n", percerror);
    
    return 0;
}
