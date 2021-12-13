#include <stdio.h>
int main(void) {
    int dan;
    while (1) {
        scanf("%d",&dan);
        if (dan==0) break;

        for (int i=1; i<=9; i++)
            printf("%d*%d=%2d\n", dan, i, dan*i);
    }   
    return 0;
}