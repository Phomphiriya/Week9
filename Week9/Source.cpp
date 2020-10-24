#include<stdio.h>

void decimal(int d)
{
	int i = 0,b;
	int a[10];
	while (d != 0)
	{
		b = d % 2;
		d = d / 2;
		a[i] = b;
		i++;
	}
	//printf("%d", i);
	for (int j = i-1; j >=0; j--) {
		printf("%d", a[j]);
	}
}

int main()
{
	int x;
	printf("Number Dec :");
	scanf_s("%d", &x);
	decimal(x);
}

