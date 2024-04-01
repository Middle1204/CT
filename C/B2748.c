#include <stdio.h>

long long f(int n) {
 
    long long ft = 0, sec = 1;
    long long temp;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for(int i = 2; i <= n; i++) {
        temp = sec; 
        sec = ft + sec; 
        ft = temp; 
    }

    return sec;
}

int main() {
    int n;
    
    scanf("%d", &n);
    printf("%lld\n", f(n));

    return 0;
}
