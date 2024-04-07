#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N); 
    char seats[N+1]; 
    scanf("%s", seats); 
    
    int hold = 1; 
    for(int i=0; i<N; i++) {
        if(seats[i] == 'S') hold++; 
        else if(seats[i] == 'L') {
            hold++; 
            i++; 
        }
    }
    
    if(N <= hold) printf("%d\n", N);
    else printf("%d\n", hold);
    
    return 0;
}
