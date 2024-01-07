#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    int age;
    char name[101];
    int idx;
};

int compare(const void *a, const void *b) {
    const struct User *A = (const struct User *)a;
    const struct User *B = (const struct User *)b;

    if (A->age < B->age) {
        return -1;
    } else if (A->age > B->age) {
        return 1;
    } else {
        if (A->idx < B->idx) {
            return -1;
        } else {
            return 1;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    struct User users[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &users[i].age, users[i].name);
        users[i].idx = i; 
    }

    qsort(users, N, sizeof(struct User), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", users[i].age, users[i].name);
    }

    return 0;
}
