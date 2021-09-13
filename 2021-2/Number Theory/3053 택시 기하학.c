#include <stdio.h>
#define PI 3.14159265358979

int main() {
    int n;
    scanf("%d",&n);
    printf("%.6f\n", PI*n*n);
    printf("%.6f\n",2.0*n*n);
    return 0;
}