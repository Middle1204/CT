#include <stdio.h>

int finding(int N) {
    int res = 0;
    
    for (int i = (N - 54 > 1 ? N - 54 : 1); i < N; i++) {
        int sum = i, temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == N) {
            res = i;
            break;
        }
    }
    
    return res;
}

int main() {
    int N;
    scanf("%d", &N);
    
    printf("%d\n", finding(N));
    
    return 0;
}
