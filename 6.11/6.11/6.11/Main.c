#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[9] = { 55,68,45,26,78,99,15,2,67 };
	int tmp;
	for (int j=0
		; j < 9; j++)
	{
		for (int i = 0; i < 8; i++)
		{
			if (a[i + 1] > a[i])
			{
				tmp = a[i];
				a[i] = a[i + 1];
				a[i+1] = tmp;
			}
			else 
			{
				continue;
			}
		}
	}
	for (int o = 0; o < 9; o++)
	{
		printf(" %d ", a[o]);
	}
	return 0;
}