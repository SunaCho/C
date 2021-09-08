#include <stdio.h>

int main(){
    
    int box=0, inp;
    scanf("%d", &inp);
    while (1) {
        if (inp%5==0) {
            box+=inp/5;
            printf("%d", box);
            break;
        }

        inp=inp-3;
        box++;

        if (inp<0) {
            printf("-1");
            break;
        }
    }
    
    return 0;
}