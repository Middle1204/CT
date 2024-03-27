#include <stdio.h>
#include <string.h>

int main() {
    char n[333335];
    scanf("%s", n); 

    int length = strlen(n);

    switch(n[0]) {
        case '0': printf("0"); break;
        case '1': printf("1"); break;
        case '2': printf("10"); break;
        case '3': printf("11"); break;
        case '4': printf("100"); break;
        case '5': printf("101"); break;
        case '6': printf("110"); break;
        case '7': printf("111"); break;
    }

    for (int i = 1; i < length; i++) {
        switch(n[i]) {
            case '0': printf("000"); break;
            case '1': printf("001"); break;
            case '2': printf("010"); break;
            case '3': printf("011"); break;
            case '4': printf("100"); break;
            case '5': printf("101"); break;
            case '6': printf("110"); break;
            case '7': printf("111"); break;
        }
    }

    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char n[333335]; 
//     scanf("%s", n); 
//     char *binary[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

//     int length = strlen(n); 

//     int firstDigit = n[0] - '0';
//     if (firstDigit > 0) {
//         printf("%s", binary[firstDigit] + (firstDigit < 4 ? 1 : 0));
//     } else if (length == 1) {
//         printf("0");
//     }
//     for (int i = 1; i < length; i++) {
//         printf("%s", binary[n[i] - '0']);
//     }

//     return 0;
// }
