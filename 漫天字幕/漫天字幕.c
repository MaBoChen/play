#include <stdio.h>
#include <stdlib.h>
int  main()
{
	int num[100] = { 0 };
	int i;
	while (1)
	{
		for (i = 0; i < 100; i++)
		{
			if (num[i] > 10)

				printf("%s", num[i] % 2 ? "ÁõÍñÕê" : "º©der");

			else printf("  ");
			if (num[i]-- < 0)
				num[i] = rand() % 20;
		}
		system("color 02         ");
		printf("\n");
	}
}