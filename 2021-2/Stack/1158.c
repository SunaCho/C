#include <stdio.h>
int main(void) {
    int N, K, cnt;
    int j=1;
    int arr1[5001]={0};

    scanf("%d %d", &N, &K);
    printf("<");
    for (int i=0; i<N; i++) {
        cnt=0;
        while (1) {
            if (arr1[j]==0)
                cnt++;
            if (cnt==K) {
                arr1[j]=01;
                if (i==N-1)
                    printf("%d>", j);
                else
                printf("%d, ", j);
                break;
            }
            j++;
            if (j>N)
                j=1;
        }
    }
    return 0;
}
