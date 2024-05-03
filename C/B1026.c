#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}

int compare_desc(const void *a, const void *b) {
    return compare(b, a);
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N], B[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < N; i++)
        scanf("%d", &B[i]);

    qsort(A, N, sizeof(int), compare);
    qsort(B, N, sizeof(int), compare_desc);

    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += A[i] * B[i];

    printf("%d\n", sum);

    return 0;
}
