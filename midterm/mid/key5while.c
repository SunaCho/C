// while

#include <stdio.h>
int main() {
    int i=1;
    int temp=0;

    while (i<=10){
        temp+=i;
        i++;
    }
        
    printf("%d\n", temp);
    return 0;
}

