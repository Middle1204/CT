#include<stdio.h>
int main()
{
    int number=0,f[1005]={0},min=999999,max=-9999999;
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {
        scanf("%d",&f[i]);
        if(min>f[i]) min = f[i];
        if(max < f[i]) max = f[i];
    }
    printf("%d",max-min);
    return 0;
}
