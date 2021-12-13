#include <stdio.h>

int main(void){
    int sum=0, i=0;
    do { 
        i++;
        sum+=i;
    } while (i<10);
    printf("%d\n",sum);
    return 0;
}