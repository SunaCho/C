#include <stdio.h>

int main(void) {
    int T, N, lst[41][2];
    scanf("%d", &T);

    lst[0][0]=1;
    lst[0][1]=0;
    lst[1][0]=0;
    lst[1][1]=1;

    for (int i=2; i<=40; i++) {
        lst[i][0]=lst[i-1][0]+lst[i-2][0];
        lst[i][1]=lst[i-1][1]+lst[i-2][1];
    }

    while(T--){
        scanf("%d", &N);
        printf("%d %d\n", lst[N][0], lst[N][1]);
    }
    return 0;
}