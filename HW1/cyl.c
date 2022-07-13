#include <stdio.h>
#include <math.h>

int main(){
    printf("H = ");
    double h;
    scanf("%lf",&h);
    printf("L = ");
    double l;
    scanf("%lf",&l);
    printf("R = ");
    double r;
    scanf("%lf",&r);
    
    double volume1 = 3.14 * r * r * h;
    double volume2 = (acos((r-h)/r)*r*r-(r-h)*sqrt(2*r*h-h*h))*l;

    printf("Volume vertical = %lf\nVolume horizontal = %lf\n",volume1,volume2);
    return 0;
}