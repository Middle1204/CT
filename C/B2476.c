#include <stdio.h>

int calculatePrize(int rd[]) {
    int count[7] = {0};
    for (int i = 0; i < 3; i++) {
        count[rd[i]]++;
    }

    int maxCount = 0;
    int maxFace = 0;

    for (int i = 1; i <= 6; i++) {
        if (count[i] == 3) {
            return 10000 + i * 1000;
        }
        else if (count[i] == 2) {
            maxFace = i;
        }
        else if (count[i] == 1 && i > maxFace) {
            maxFace = i;
        }
    }

    if (maxFace != 0) {
        return 1000 + maxFace * 100;
    }
    else {
        return rd[2] * 100;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int maxPrize = 0;

    for (int i = 0; i < N; i++) {
        int rd[3];
        scanf("%d %d %d", &rd[0], &rd[1], &rd[2]);

        int prize = calculatePrize(rd);

        if (prize > maxPrize) {
            maxPrize = prize;
        }
    }

    printf("%d\n", maxPrize);

    return 0;
}
