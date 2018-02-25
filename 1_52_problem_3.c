#include<stdio.h>

int main()
{
    int t, num, i, j;

    printf("Please enter an interger Number. If 0 to quite: ");
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &num);
        printf("case %d", i);

        for(j = 1; j <= num; j++){
            if(num % j == 0){
                printf("%d", j);
            }
        }
        printf("\n");
    }



    return 0;
}
