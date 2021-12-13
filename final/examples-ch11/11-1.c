#include <stdio.h>

int balance;

void deposit(int amount) {
    balance+=amount;
}

void inquiry() {
    printf("%d\n", balance);
}

int main(void) {
    return 0;
}