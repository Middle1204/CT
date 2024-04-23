#include <stdio.h>

int N, M;
int arr[8];

void dfs(int num, int k) {
    if (k == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = num; i <= N; i++) {
        arr[k] = i;
        dfs(i + 1, k + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    dfs(1, 0);
    return 0;
}
