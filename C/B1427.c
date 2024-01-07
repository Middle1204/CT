#include <stdio.h>

void sort(int num) {
    int digits[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        digits[digit]++;
        num /= 10;}

    for (int i = 9; i >= 0; i--) {
        while (digits[i] > 0) {
            printf("%d", i);
            digits[i]--;}}
    printf("\n");}

int main() {
    int input;
    scanf("%d", &input);
    sort(input);
    return 0;}
