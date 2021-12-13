#include <stdio.h>

int get_add(int x, int y) {
    return x+y;
}

int get_sub(int x, int y) {
    if (x>y)
        return x-y;
    else
        return y-x;
}

int get_mul(int x, int y) {
    return x*y;
}

int get_div(int x, int y) {
    return (double)x/y;
}

int main(void) {
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d\n", get_add(n1,n2));
    printf("%d\n", get_sub(n1,n2));
    printf("%d\n", get_mul(n1,n2));   
    if (n2!=0)
        printf("%d\n", get_div(n1,n2));
    else
        printf("Division Error");

    return 0;
}