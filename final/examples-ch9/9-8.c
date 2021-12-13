#include <stdio.h>
int main(void) {
    int n=0;
    for (int i=1; i<=20; i++) {
        n=i%3;
        if (n==0) {
            printf("%s","짝");
            continue;
        }
        printf("%d", i);
    }
    printf("\n");
    return 0;
}