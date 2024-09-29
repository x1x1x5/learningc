#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("\n\tHello world!\n");

    int age;
    age = 22;
    printf("\nYou are %d old\n", age);

    float temp;
    printf("\nPlease enter the temperature: ");
    scanf("%f",&temp);

    printf("\nThe temperature is: %f degrees celcius\n", temp);
}
