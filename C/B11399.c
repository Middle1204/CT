#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int N, i;
    scanf("%d", &N);
    int P[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }
    qsort(P, N, sizeof(int), compare);
    int total = 0, sum = 0;
    for(i = 0; i < N; i++) {
        sum += P[i];
        total += sum;
    }
    printf("%d", total);
    return 0;
}
