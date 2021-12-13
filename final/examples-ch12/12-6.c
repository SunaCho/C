#include <stdio.h>

void modify(int *ptr){
    *ptr=200;
}

int main(void) {
    int num=10;
    modify(&num);
    printf("%d",num);
    return 0;
}