#include <stdio.h>

void printMultiplesOfSeven() {
    int num;

    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    for (num = 10; num <= 99; num++) {
        if (num % 7 == 0) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    printMultiplesOfSeven(); // Gọi hàm để xuất các số nguyên có 2 chữ số và là bội của 7
    return 0;
}