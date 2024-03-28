#include <stdio.h>

int main() {
    int N, L, D;
    scanf("%d %d %d", &N, &L, &D);

    int tTime = N * L + (N - 1) * 5;
    int Time = 0;
   
    while (1) {
        int songIndex = Time / (L + 5);
        int timeCycle = Time % (L + 5);

        if (Time >= tTime || (timeCycle >= L && timeCycle < L + 5)) {
            printf("%d\n", Time);
            break;
        }

        Time += D;
    }

    return 0;
}
