#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int pMin = 1000; 
    int sMin = 1000; 
    
    for (int i = 0; i < M; i++) {
        int packagePrice, singlePrice;
        scanf("%d %d", &packagePrice, &singlePrice);
        
        if (packagePrice < pMin) pMin = packagePrice;
        if (singlePrice < sMin) sMin = singlePrice;
    }
    int cost = (N / 6) * pMin + (N % 6) * sMin;
    
    if (cost > ((N / 6) + 1) * pMin) {
        cost = ((N / 6) + 1) * pMin;
    }
    
    if (cost > N * sMin) {
        cost = N * sMin;
    }
    
    printf("%d\n", cost);
    
    return 0;
}
