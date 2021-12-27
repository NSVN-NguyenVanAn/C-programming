#include <stdio.h>
void main()
{
	int x[] = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000};
	int y[8];
	FILE* txtFile = fopen("input.txt","wt");
	for (int i = 0;i < 8;i++)
	{
		fprintf(txtFile, "%d\n", x[i]);
	}
	fclose(txtFile);
	
	FILE* binFile = fopen("data.dat","wb");
	fwrite(x, sizeof(int), 8, binFile);
	fclose(binFile);
	
	txtFile = fopen("input.txt","rt");
	for (int i = 0;i < 8;i++)
	{
		fscanf(txtFile, "%d", &y[i]);
	}
	fclose(txtFile);
	for (int i = 0;i < 8;i++)
	{
		printf("%d ", y[i]);
	}
	printf("\n");
	
	binFile = fopen("data.dat","rb");
	fread(&y[0], sizeof(int), 8, binFile);
	fclose(binFile);
	for (int i = 0;i < 8;i++)
	{
		printf("%d ", y[i]);
	}
	printf("\n");
}
