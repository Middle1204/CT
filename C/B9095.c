#include <stdio.h>

int w[12];

int main() {
    int T, n;
    w[0] = 1;
    for(int i = 1; i <= 11; i++) {
        if(i-1 >= 0) w[i] += w[i-1];
        if(i-2 >= 0) w[i] += w[i-2];
        if(i-3 >= 0) w[i] += w[i-3];
    }

    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        printf("%d\n", w[n]);
    }
    return 0;
}
