#include <stdio.h>
#include <math.h>

int main() {
    double r; 
    printf("Raio: "); 
    scanf("%lf", &r);
    printf("Area: %.2lf\nPerimetro: %.2lf\n", M_PI*r*r, 2*M_PI*r);
    return 0;
}