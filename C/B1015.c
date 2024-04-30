#include <stdio.h>

int main() {
    int N, A[50], P[50], B[50];
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        P[i] = i;
    }
//bubble sort
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-1-i; j++) {
            if(A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                temp = P[j];
                P[j] = P[j+1];
                P[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        B[P[i]] = i;
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
