#include <stdio.h> 
int main(void){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", a+b);

    if (a-b==0)
        printf("잘못되었음");
    else if (a-b>0)
        printf("%d", a-b);
    else
        printf("%d", b-a);
    
    return 0;
}