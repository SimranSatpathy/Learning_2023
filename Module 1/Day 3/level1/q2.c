#include <stdio.h>

void printBits(int num) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Assuming a 32-bit integer
    while (mask) {
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printBits(num);
    return 0;
}
