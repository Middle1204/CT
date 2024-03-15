#include <stdio.h>

void Stars(char ch, int count) {
    for(int i = 0; i < count; i++) {
        printf("%c", ch);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        Stars('*', i);
        Stars(' ', 2 * (N - i));
        Stars('*', i);
        printf("\n");
    }
    
    for(int i = N - 1; i > 0; i--) {
        Stars('*', i);
        Stars(' ', 2 * (N - i));
        Stars('*', i);
        printf("\n");
    }

    return 0;
}
