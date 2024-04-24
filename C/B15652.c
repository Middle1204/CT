#include <stdio.h>

int N, M;
int arr[9];

void dfs(int num, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = num; i <= N; i++) {
        arr[cnt] = i;
        dfs(i, cnt + 1);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    dfs(1, 0);
    return 0;
}
