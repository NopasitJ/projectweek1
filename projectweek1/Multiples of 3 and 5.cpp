#include<stdio.h>

int main()
{
	int m=0;
	int i=0;
	for (i = 1; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			m += i;
		}
		else if (i % 5 == 0)
		{
			m += i;
		}
	}
	printf("%d", m);
	return 0;
}