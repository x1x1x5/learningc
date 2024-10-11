#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

void main()
{
    printf("To calculate resonant frequency enter value of inductance then capacitance in that order\n");

    res();
}

void res(){
    int i = 0;

    while (i == 0){
        float ind;
        float cap;
        scanf("%f",&ind);
        scanf("%f",&cap);

        if (ind <= 0 || cap <= 0){
            printf("You must enter values greater than 0\n");
            continue;
        }

        float f;
        f = 1/(2.0*PI*sqrt(ind*cap));

        printf("\nThe resonant frequency is %f",f);

        i++;
    }
}
