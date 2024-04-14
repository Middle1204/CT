#include <stdio.h>

int main() {
    int K, num, top = -1;
    scanf("%d", &K);
    int stack[K];

    for(int i = 0; i < K; i++) {
        scanf("%d", &num);
        if(num == 0) {
            top--;
        } else {
            stack[++top] = num;
        }
    }

    int sum = 0;
    for(int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    printf("%d", sum);
    return 0;
}
