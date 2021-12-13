#include <stdio.h>
int main(void) {
    int cnt=0, input;
    while (1) {
        scanf("%d", &input);
        if (input==2020) {
            printf("일치\n");
            return 0;
        }
        cnt++;
        if (cnt==5)
            break;
    }
    printf("%d",cnt);
    return 0;
}