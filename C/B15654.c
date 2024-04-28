#include <stdio.h>
#include <stdlib.h>

int n, m;
int arr[10];
int test[10];
int print[10];

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

void bt(int depth)
{
	int i;
	if (m == depth)
	{
		i = 0;
		while (i < m)
		{
			printf("%d ",print[i]);
			i++;
		}
		printf("\n");
	}
	else
	{
		i = 0;
		while (i < n)
		{
			if (test[i] == 0)
			{
				test[i] = 1;
				print[depth] = arr[i];
				bt(depth + 1);
				test[i] = 0;
			}
			i++;
		}
	}
}

int main()
{
	int i;
	scanf("%d %d", &n, &m);
	i = 0;
	while(i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	qsort(arr, n, sizeof(int), compare);
	bt(0);
}