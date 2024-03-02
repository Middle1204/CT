#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int maxPrize = 0;

    for (int i = 0; i < N; i++) {
        int rd[3];
        scanf("%d %d %d", &rd[0], &rd[1], &rd[2]);

        int prize = 0;

        if (rd[0] == rd[1] && rd[1] == rd[2]) {
            prize = 10000 + rd[0] * 1000;
        }

        else if (rd[0] == rd[1] || rd[1] == rd[2] || rd[0] == rd[2]) {
            prize = 1000 + rd[1] * 100;
        }

        else {
            int maxrd = (rd[0] > rd[1]) ? ((rd[0] > rd[2]) ? rd[0] : rd[2]) : ((rd[1] > rd[2]) ? rd[1] : rd[2]);
            prize = maxrd * 100;
        }

        if (prize > maxPrize) {
            maxPrize = prize;
        }
    }

    printf("%d\n", maxPrize);

    return 0;
}
