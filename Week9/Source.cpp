#include<stdio.h>
void dec_to_bin(int d)
{
	int o,i=0;
	int a[100];
	if (d >= 0)
	{
		while (d != 0)
		{
			o = d % 2;
			d = d / 2;
			a[i] = o;
			i++;
		}
		for (int j = i - 1; j >= 0; j--)
		{
			printf("%d", a[j]);
		}
	}
	else {
		printf("Error input");
	}
}
int main()
{
	int x;
	printf("Enter decimal :");
	scanf_s("%d", &x);
	dec_to_bin(x);
}