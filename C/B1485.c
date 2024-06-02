#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

// 거리 계산
int distance(Point a, Point b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

// qsort 
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int is_square(Point p[4]) {
    int dist[6], k = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            dist[k++] = distance(p[i], p[j]);
        }
    }

    qsort(dist, 6, sizeof(int), compare);
    return (dist[0] > 0 && dist[0] == dist[1] && dist[1] == dist[2] && dist[2] == dist[3] && dist[4] == dist[5]);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        Point p[4];
        for (int i = 0; i < 4; i++) {
            scanf("%d %d", &p[i].x, &p[i].y); }

        if (is_square(p)) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }

    return 0;
}
