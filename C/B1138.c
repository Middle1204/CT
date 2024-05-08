#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int left[N]; 
    for(int i = 0; i < N; i++) {
        scanf("%d", &left[i]);
    }

    int line[N];
    for(int i = 0; i < N; i++) {
        line[i] = 0; 
    }

    for(int i = 1; i <= N; i++) { 
        int count = 0;
        for(int j = 0; j < N; j++) {
            if(count == left[i-1] && line[j] == 0) {
                line[j] = i; 
                break; 
            }
            if(line[j] == 0) count++; 
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", line[i]);
    }

    return 0;
}
