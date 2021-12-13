#include <stdio.h>
int main(void) {
    int s;
    do {
        scanf("%d", &s);
    } while (s<1||s>3);
    printf("%d\n",s);
    return 0;
}