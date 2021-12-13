#include<stdio.h>
#define SIZE 5

int get_sum(int *p){
    int sum=0;
    for (int i=0; i<SIZE; i++)
        sum+=p[i];
    return sum;
}

int main(void) {
    int data[SIZE];
    int value;
    for (int i=0; i<SIZE; i++)
        scanf("%d", &data[i]);
    value=get_sum(data);
    printf("%d",value);
    return 0;
}