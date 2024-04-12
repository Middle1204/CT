#include <stdio.h>

int main() {
    int scores[8], index[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &scores[i]);
        index[i] = i + 1; // 문제 번호 저장
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (scores[i] < scores[j]) {
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;

                temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (index[i] > index[j]) {
                int temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }

    printf("%d\n", sum);
    for (int i = 0; i < 5; i++) {
        printf("%d ", index[i]);
    }
    return 0;
}
