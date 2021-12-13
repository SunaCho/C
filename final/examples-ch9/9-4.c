#include <stdio.h>
int main(void) {
    int dan,i;
    do {
        scanf("%d",&dan);
    } while (dan<1||dan>9);

    i=1;
    do { 
        printf("%d*%d=%d\n",dan,i,dan*i);
        i++;
    } while (i<=9);
    return 0;
}