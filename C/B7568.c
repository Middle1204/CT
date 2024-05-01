#include<stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    int weight[N], height[N], rank[N];
    
    for(i = 0; i < N; i++) {
        scanf("%d %d", &weight[i], &height[i]);
        rank[i] = 1;
    }
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++;
            }
        }
    }
    
    for(i = 0; i < N; i++) {
        printf("%d ", rank[i]);
    }
    
    return 0;
}
