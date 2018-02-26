#include<stdio.h>

int main()
{
    int t, num1, num2, temp, kase;
    scanf("%d", &t);

    for(kase = 1; kase <= t; kase++){
        scanf("%d %d", &num1, &num2);

        if(num1 > num2){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        printf("Case %d: %d %d\n", kase, num1, num2);
    }

    return 0;
}
