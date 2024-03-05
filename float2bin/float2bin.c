#include <stdio.h>
#include <stdlib.h>

void getFloatBin(float num, char bin[])
{
	int *f = (int*) (&num);
	for (int i = 0; i < 32; i++)
	{
		bin[i] = (*f) & (1 << 31 - i) ? 1 : 0;
	}
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("请输入需要转换的小数\n");
		exit(-1);
	}
	float num = atof(argv[1]);
	char c[32];
	getFloatBin(num, c);
	printf("Number %.8f representation: ", num);
	for (int i = 0; i < 8; i++)
		printf("%d%d%d%d ", c[i*4], c[i*4+1], c[i*4+2], c[i*4+3]);
	printf("\n");
}
