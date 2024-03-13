#include <stdio.h>

int main() {
    int N, i, j, space;
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        for(space = 0; space < i; space++) {
            printf(" ");
        }
        
        for(j = 0; j < 2*(N-i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
