#include <stdio.h>

int N, M;
int arr[9]; 
int visited[9];  

void dfs(int cnt) {
    
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = 1;       
            arr[cnt] = i;    
            dfs(cnt + 1);         
            visited[i] = 0;   
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);

    dfs(0);

    return 0;
}
