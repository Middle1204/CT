#include <stdio.h>

int main() {
    int N, A[50], P[50], B[50];
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        P[i] = i;
    }
    // Bubble sort를 이용하여 A[i]와 P[i]를 동시에 정렬
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
    // P배열을 이용하여 B배열 생성
    for(int i = 0; i < N; i++) {
        B[P[i]] = i;
    }
    // B배열 출력
    for(int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}
