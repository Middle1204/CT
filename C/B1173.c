#include <stdio.h>

int main() {
    int N, m, M, T, R;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    
    int pulse = m, time = 0, work = 0;
    
    while (work < N) {
        if (m + T > M) { 
            printf("-1\n");
            return 0;
        }
        
        if (pulse + T <= M) { 
            pulse += T;
            work++;
        } else { 
            pulse = (pulse - R < m) ? m : pulse - R;
        }
        
        time++;
        
        if (time > 1000000) {
            printf("-1\n");
            return 0;
        }
    }
    
    printf("%d\n", time);
    return 0;
}
