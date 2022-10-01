#include<cstdio>
#include<iostream>
int main()
{
	int N;
	printf("Masukkan angka : ");
	scanf("%d", &N);
	if(N%2==0)
	{
		printf("%d adalah angka genap", N);
	}
	else
	{
		printf("%d adalah angka ganjil", N);
	}
	system("pause>0");
	
}
