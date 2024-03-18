#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int A[50], B[50]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    int box = 0, book = 0;
    int rd = 0;

    while (book < M) {
        if (A[box] >= B[book]) { 
            A[box] -= B[book]; 
            book++; 
        } else { 
            rd += A[box];
            box++; 
        }
    }
   
    for (int i = box; i < N; i++) {
        rd += A[i];
    }
    printf("%d\n", rd); 

    return 0;
}
