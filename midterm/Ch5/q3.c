#include <stdio.h> 
int main(void){

    int num=100000;
    int won;

    scanf("%d", &won);

    if (num>=won)
    {
        printf("사용가능합니다\n");
        printf("%d\n", num-won);
    }
        
    else
        printf("사용불가");

    return 0;
}