#include <stdio.h>

int main() {
    long x,y,z;

    while (1){
        scanf("%d %d %d", &x, &y, &z);
        long x1, y1, z1;
        if (x==0 && y==0 && z==0)
            break;

        x1=x*x, y1=y*y, z1=z*z;
        if (x1+y1==z1 || x1+z1==y1 || y1+z1==x1)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}