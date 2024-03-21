#include <stdio.h>

int main() {
    int N, L;
    scanf("%d %d", &N, &L);
    
    int label = 1; 
    for(int i = 1; i <= N; ) {
        int t = label;
        int tf = 1; 
        while(t > 0) {
            if(t % 10 == L) {
                tf = 0;
                break;
            }
            t /= 10;
        }
       
        if(tf) {
            i++;
        }
        
        label++;
    }
    
    printf("%d\n", label - 1);
    
    return 0;
}
