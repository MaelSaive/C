//
// Created by saive on 21/07/2023.
//

#include <stdio.h>

int main(){

    int value,i = 0;

    printf("Hello Which table would you like to see?");
    scanf("%d", &value);
    printf("\n");

    printf("here's the multiplication table of %d:", value);
    printf("\n");

    for(i = 1; i<=10;i++){
        printf("%d X %d = %d",value,i, value*i);
        printf("\n");
    }

    printf("process ended");
    return 0;
};
