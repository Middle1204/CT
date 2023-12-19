#include <stdio.h>
#include <string.h>

int countWords(char *str) {
    int count = 0;
    int word = 0;  

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            word = 0;
        }
        else if (word == 0) {
            count++;
            word = 1;
        }
    }

    return count;
}

int main() {
    char input[1000001];
    
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    int result = countWords(input);
    printf("%d\n", result);
    return 0;
}
