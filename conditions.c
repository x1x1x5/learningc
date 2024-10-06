#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void temperature(arg) {
    float temp;
    printf("\nPlease enter the temperature in celsius: ");
    scanf("%f",&temp);
    printf("\nThe temperature is: %f degrees celsius\n", temp);
    float fahr;
    fahr = temp * (9.0/5.0) + 32;
    printf("\nThe temperature in fahrenheit is %f", fahr);
}

void angle() {
    float deg;
    printf("\nPlease enter angle in degrees \n");
    scanf("%f",&deg);
    float rad;
    rad = deg * (PI/180);
    printf("\nThe angle is %f radians",rad);
}

void resistance() {
    float res;
    printf("\n1 for series, 2 for paralell");
    int type;
    scanf("%d", &type);
    if (type == 1){
        printf("\nEnter first resistance");
        float a;
        scanf("%f", &a);
        printf("\nEnter second resistance");
        float b;
        scanf("%f", &b);
        float sum;
        sum = a + b;
        printf("Res in series = %f",sum);
    } else {
        printf("\nEnter first resistance");
        float a;
        scanf("%f", &a);
        printf("\nEnter second resistance");
        float b;
        scanf("%f", &b);
        float tot;
        tot = 1/(1/a + 1/b);
        printf("Res total  %f",tot);
    }
}

void calculator() {
    printf("\n 1 + \n 2 -\n");
    printf("\n 3 / \n 4 *\n");
    int choices;
    scanf("%d", &choices);
    if (choices == 1){
        printf("\nEnter first num ");
        float a;
        scanf("%f", &a);
        float b;
        printf("\nEnter second num ");
        scanf("%f", &b);
        float sum  = a + b;
        printf("\n The sum = %f", sum);

    } else if (choices == 2) {
        printf("\nEnter first num ");
        float a;
        scanf("%f", &a);
        float b;
        printf("\nEnter second num ");
        scanf("%f", &b);
        float sum  = a - b;
        printf("\n The total = %f", sum);
    } else if (choices == 3){
        printf("\nEnter first num ");
        float a;
        scanf("%f", &a);
        float b;
        printf("\nEnter second num ");
        scanf("%f", &b);
        float sum  = a /b;
        printf("\n The total = %f", sum);
    } else if (choices == 4){
        printf("\nEnter first num ");
        float a;
        scanf("%f", &a);
        float b;
        printf("\nEnter second num ");
        scanf("%f", &b);
        float sum  = a * b;
        printf("\n The total = %f", sum);
    }
}

void main()
{
    printf("Welcome please pick: ");
    printf("\n 1 - temperature conversion \n 2 - angle conversion");
    printf("\n 3 - resistor calculator \n 4 - simple calculator\n");

    int choice;
    scanf("%d", &choice);


    if (choice == 1){
        temperature();

    } else if ( choice == 2 ) {
        angle();

    } else if ( choice == 3 ) {
        resistance();

    } else if ( choice == 4 ) {
        calculator();
    } else {
        printf("\n Invalid selection");
    }
}
