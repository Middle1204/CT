#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}


int main() {
    int n[9];
    int total = 0;
    int i, j;

    for (i = 0; i < 9; i++) {
        scanf("%d", &n[i]);
        total += n[i];
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            if (total - n[i] - n[j] == 100) {
                n[i] = n[j] = 0;
                goto FOUND;
            }
        }
    }

FOUND:
    qsort(n, 9, sizeof(int), (int (*)(const void *, const void *))compare);

    for (i = 0; i < 9; i++) {
        if (n[i] > 0) printf("%d\n", n[i]);
    }

    return 0;
}
