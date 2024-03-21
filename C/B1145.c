#include <stdio.h>

int main() {
    int num[5]; 
    int i, j, count, lcm = 1; 

    for(i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    while (1) {
        count = 0;
       
        for (i = 0; i < 5; i++) {
            if (lcm % num[i] == 0) { 
                count++;
            }
        }
        if (count >= 3) { 
            printf("%d\n", lcm);
            break; 
        }
        lcm++;
    }

    return 0;
}
