#include <stdio.h>
#include <stdlib.h>

int N, M;
int arr[8];
int result[8];

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void sq(int idx, int selected) {
    if (selected == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        return;
    }

    for (int i = idx; i < N; i++) {
        result[selected] = arr[i];
        sq(i + 1, selected + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    qsort(arr, N, sizeof(int), cmp);
    sq(0, 0);

    return 0;
}
