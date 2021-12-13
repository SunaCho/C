#include <stdio.h>
int main(void) {
    int dan, i;
    scanf("%d", &dan);
    i=1;

    do {
        printf("%d*%d=%d\n",dan,i,dan*i);
        i++;
    } while (i<=9);

    return 0;
}