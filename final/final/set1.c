#include <stdio.h>
int main(void) {

    int k=0;
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=i; j++){
            printf("%d",k+1);
            k++;
        }
        printf("\n");
    }
    return 0;
}