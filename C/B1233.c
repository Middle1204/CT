#include <stdio.h>

int main() {
    int S1, S2, S3;
    scanf("%d %d %d", &S1, &S2, &S3);

    int freq[81] = {0};
    int MFreqe = 0;
    int MSum = 0;

    for (int i = 1; i <= S1; ++i) {
        for (int j = 1; j <= S2; ++j) {
            for (int k = 1; k <= S3; ++k) {
                int sum = i + j + k;
                freq[sum]++;
                if (freq[sum] > MFreqe || (freq[sum] == MFreqe && sum < MSum)) {
                    MFreqe = freq[sum];
                    MSum = sum;
                }
            }
        }
    }

    printf("%d\n", MSum);

    return 0;
}
