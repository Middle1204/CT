#include <stdio.h>

int main() {
    int N1, N2;
    scanf("%d %d", &N1, &N2);
    int R3 = N1 * (N2 % 10);
    int R4 = N1 * ((N2 / 10) % 10);
    int R5 = N1 * (N2 / 100);
    int R6 = N1 * N2;

    printf("%d\n%d\n%d\n%d\n", R3, R4, R5, R6);

    return 0;
}
