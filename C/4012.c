#include <stdio.h>

typedef struct {
    int score;
    int rank;
} Student;

void Rank(Student s[], int n) {
	//���� ��� 
    for (int i = 0; i < n; ++i) {
        s[i].rank = 1;  
		//rank�� ��� �ʱ�ȭ ��Ű�� �迭�� �ִ� ������ ������ rank+1 
        for (int j = 0; j < n; ++j) {
            if (s[j].score > s[i].score) {
                s[i].rank++;
            }
        }
    }
}

int main() {
	
    int n;
    scanf("%d", &n);
    Student s[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &s[i].score);
    }

    Rank(s, n);

    for (int i = 0; i < n; ++i) {
        printf("%d %d\n", s[i].score, s[i].rank);
    }

    return 0;
}

