#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

double resistance (double r,double l,double p){
    double A = PI*r*r;
    double R = p*(1/A);
    return R;
}


void main()
{
    double r;
    double l;
    double p;

    int i = 1;

    while ( i == 1){
        printf("\nEnter radius, length and resistivity.\n");
        scanf("\n%lf",&r);
        scanf("\n%lf",&l);
        scanf("\n%lf",&p);

        if (r == 0 ||l == 0 ||p == 0 ){
            printf("\nAll your values must be greater than 0");
            continue;
        } else {
            double res = resistance(r,l,p);
            printf("Your wires resistance = %lf", res);
            i = 0;
        }

    }
}

