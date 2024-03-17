#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2; 
    int current, start, d; 
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

  
    current = h1 * 3600 + m1 * 60 + s1;
    start = h2 * 3600 + m2 * 60 + s2;

    d = start - current;

    if (d < 0) {
        d += 24 * 3600;
    }

    int hour = d / 3600;
    int min = (d % 3600) / 60;
    int sec = d % 60;

    printf("%02d:%02d:%02d\n", hour, min, sec);

    return 0;
}
