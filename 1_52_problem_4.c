#include<stdio.h>

int main()
{
    int i, j, number;

    printf("Please enter a integer value: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        for(j = 1; j <= number; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
