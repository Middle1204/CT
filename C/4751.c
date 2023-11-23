#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int country;
    int id;
    int score;
} Student;

int compare(const void *a, const void *b) {
    return ((Student *)b)->score - ((Student *)a)->score;
}

int main() {
    int N;
    scanf("%d", &N);

    Student *students = (Student *)malloc(N * sizeof(Student));
    int medalCount[101] = {0};  // �޴� ���� Ƚ���� �����ϴ� �迭

    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &students[i].country, &students[i].id, &students[i].score);
    }

    qsort(students, N, sizeof(Student), compare);

    int medal = 0;
    for (int i = 0; i < N && medal < 3; i++) {
        if (medalCount[students[i].country] < 2) { // ������ �޴� ����Ƚ����
            printf("%d %d\n", students[i].country, students[i].id);
            medalCount[students[i].country]++;
            medal++;
        }
    }

    free(students);

    return 0;
}


