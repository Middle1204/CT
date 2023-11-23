#include <stdio.h>

int main() {
    int list[1000], temp, i, j, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    for (i = 1; i < n; i++) {
        temp = list[i];
        j = i - 1;
        
        while (j >= 0 && list[j] > temp) {
            list[j + 1] = list[j];
            j--;
        }
        
        list[j + 1] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}

