#include <stdio.h>

int main(void){
    
    char color;
    scanf("%c", &color);

    switch(color) {

        case 'R':
        case 'r':
            printf("정지");
            break;
        case 'Y':
        case 'y':
            printf("대기");
            break;
        case 'G':
        case 'g':
            printf("출발");
            break;
    }
    return 0;
}