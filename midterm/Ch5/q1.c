#include <stdio.h> 
int main(void){

    int num;

    scanf("%d", &num);

    if (num%2==0)
        printf("짝");
    else
        printf("홀");
    
    return 0;
}