#include <stdio.h>

int balance=0;

void deposit(int amount) {

    balance+=amount;
    printf("%d\n", balance);
}

void inquiry() {
    printf("%d\n", balance);
}

void take(int amount) {

    balance-=amount;
    printf("%d\n",balance);
}

int num;
int amount;

int main(void) {

    while(1) {
        printf("고르세요\n");
        scanf("%d",&num);

        if (num==1) {
            scanf("%d", &amount);
            deposit(amount);
        }

        else if (num==2) {
            inquiry();
        }

        else if (num==3) {
            scanf("%d", &amount);
            take(amount); 
        }
        else if (num==-1) {
            break;
        }
        else
            continue;
    }
    return 0;
}