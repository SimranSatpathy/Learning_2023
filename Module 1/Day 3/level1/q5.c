#include <stdio.h>

void findSmallestAndLargestDigits(int n) {
    int smallest = 9;
    int largest = 0;
    for (int i = 0; i < n; i++) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        
        while (num > 0) {
            int digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            num /= 10;
        }
    }
    
    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    findSmallestAndLargestDigits(n);
    return 0;
}