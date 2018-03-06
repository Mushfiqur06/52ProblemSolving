#include<stdio.h>

int main()
{
    // Initialize variable
    int T;
    unsigned long int N;

    //Take input
    scanf("%d", &T);

    for(int i = 0; i <= T; i++){
        scanf("%lu", &N);
        unsigned long int fact = 1, i;
        for(i = 2; i <= N; i++){
            fact = fact * i;
        }
        printf("%lu\n", fact);
    }

    return 0;
}
