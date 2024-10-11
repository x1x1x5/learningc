#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Enter the number you want to calculate the factorial of it must be a positive integer\n");
    factorial();
}

void factorial(){
    int num;
    int i;
    int long long fact = 1;
    scanf("%d",&num);

    if (num <= 0){
        printf("\nYou must enter a positive integer");
    }else{
        for (i = 1 ; i  <= num; i++){
            
            fact *= i;
      }
      printf("%d",fact);
    }
}