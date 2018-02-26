#include<stdio.h>
#include<stdlib.h>

int main()
{
    char line[] = "1 -20 10000 -5 20 7 445 8";
    char *p, *e;
    long input;
    int count = 0;
    p = line;

    for(p = line; ; p = e){
        input = strtol(p, &e, 10);
        if(p == e){
            break;
        }
        count++;
    }
    printf("%d\n", count);

    return 0;
}
