#include <stdio.h>

int main() {
    int burger[3];
    int drink[2];
    int i;
    int mBuger = 2001; 
    int mDrink = 2001;

    for (i = 0; i < 3; i++) {
        scanf("%d", &burger[i]);
        if (burger[i] < mBuger) {
            mBuger = burger[i]; 
        }
    }


    for (i = 0; i < 2; i++) {
        scanf("%d", &drink[i]);
        if (drink[i] < mDrink) {
            mDrink = drink[i]; 
        }
    }

    printf("%d\n", mBuger + mDrink - 50);

    return 0;
}
