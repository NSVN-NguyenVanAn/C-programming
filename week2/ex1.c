
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

void main(int argc, char** argv)
{
	int n = 0;
	int* x = NULL;
	int sum = 0;
	for (int i = 0;i < argc;i++)
	{
		printf("%s\n", argv[i]);
	}
	
	if (argc >= 2)
	{
		n = atoi(argv[1]);
		x = (int*)calloc(n, sizeof(int));
		for (int i = 0;i < n;i++)
		{
			printf("x[%d]=", i);
			scanf("%d",x + i);
			sum += x[i];
		}
		free(x);
		
		printf("Sum=%d\n", sum);
	}else{
		printf("Thieu tham so!\n");
	}
	getch();
}
