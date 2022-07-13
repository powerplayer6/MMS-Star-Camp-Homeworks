#include <stdio.h>
#include <math.h>

int main(){
    printf("Input mass in KG: ");
    double mass;
    scanf("%lf",&mass);
    printf("Input height in CM: ");
    double height;
    scanf("%lf",&height);
    double bmi = mass/(pow(height,2));
    double bmin = (1.3*mass)/(pow(height,2.5));
    printf("BMI = %lf\nBMInew = %lf\n", bmi, bmin);
}