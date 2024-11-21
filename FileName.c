#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
	int a, b, c, i, e;
	while (scanf_s("%d %d %d", &a, &b, &c) != EOF)
	{
		i = 0;
		e = 0;
		int list[3] = { a,b,c };
		for (e = 0; e <= 2; e++)
		{
			if (list[e] >= 1911 && list[e] <= 2024)
			{
				if (list[e] % 400 == 0)
				{
					printf("%d是閏年，", list[e]);
					i = i + 1;
				}
				else if (list[e] % 4 == 0 && a % 100 != 0)
				{
					printf("%d是閏年，", list[e]);
					i = i + 1;
				}
				else
				{
					printf("%d是平年，", list[e]);
				}
			}
			else
			{
				printf("%d不在此範圍內，", list[e]);
			}
		}
		printf("閏年總共有%d個\n", i);
	}
	return 0;
}
*/

int main()
{
	int a, b, c,i;
	a = 5;
	i = 1;

	while (i<=a)
	{
		for (b = 1; b <= a; b++)
		{
			printf(" ");
		}
		for (c = 1; c <= a*2-1; c+=2)
		{
			printf("*\n");
		}
		i = i++;
	}
	system("pause");
	return 0;
}