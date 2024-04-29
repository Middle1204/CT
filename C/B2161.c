#include <stdio.h>

int queue[10000];
int front = 0, rear = 0;

void push(int x) {
    queue[rear++] = x;
}

void pop() {
    front++;
}

int fValue() {
    return queue[front];
}

int size() {
    return rear - front;
}

int main() {
    int N, i;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        push(i);
    }
    while(size() > 1) {
        printf("%d ", fValue());
        pop();
        push(fValue());
        pop();
    }
    printf("%d\n", fValue());
    return 0;
}
