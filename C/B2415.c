#include <stdio.h>
int main() {
    int N;
    while(scanf("%d", &N), N) {
        while(N > 9) {
            N = N / 10 + N % 10;
        }
        printf("%d\n", N);
    }
    return 0;
}
