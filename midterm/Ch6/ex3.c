#include <stdio.h> 
int main(void){

    int res;
    char grade;

    scanf("%d", &res);

    if (res>=80)
    {
        printf("우수학점군");
        if (res>=90)
            grade='A';
        else
            grade='B';

    }
        
    else if (res>=60) {
        printf("보통학점군");
        if (res>=70)
            grade='C';
        else
            grade='D';
    }
        
    else
        printf("F");

    printf("%c", grade);

}