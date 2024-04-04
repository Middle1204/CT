#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int seats[101] = {0}; 
    int rej = 0; 
    
    for(int i = 0; i < N; i++) {
        int seatN;
        scanf("%d", &seatN);
        
        if(seats[seatN] == 0) { 
            seats[seatN] = 1; 
        } else { 
            rej++; 
        }
    }
    
    printf("%d\n", rej); 
    
    return 0;
}
