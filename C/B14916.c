#include <stdio.h>

int minCoins(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 5 == 0) {
            count += n / 5;
            n = 0;
        } else {
            n -= 2;
            count++;
        }
        if (n < 0) {
            count = -1;
            break;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", minCoins(n));
    return 0;
}
