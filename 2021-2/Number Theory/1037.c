#include <stdio.h>

int main(void){
    int N, max=0, min=999999;
    int lst[10000];
    scanf("%d", &N);
    for (int i=0; i<N; i++) { 
        scanf("%d", &lst[i]);
    if (lst[i]<min)
        min=lst[i];
    if (lst[i]>max)
        max=lst[i];
    }
        printf("%d", min*max);
}