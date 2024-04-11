#include <stdio.h>
#include <string.h>

int main() {
    int K;
    char str[201];
    scanf("%d %s", &K, str);

    int len = strlen(str);
    int rows = len / K;
    char result[len + 1]; 

    int idx = 0; 
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < rows; j++) {
            int pos;
            if (j % 2 == 0) { 
                pos = j * K + i;
            } else { 
                pos = (j + 1) * K - i - 1;
            }
            result[idx++] = str[pos];
        }
    }

    result[idx] = '\0';
    printf("%s\n", result);

    return 0;
}
