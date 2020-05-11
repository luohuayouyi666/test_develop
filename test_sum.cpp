#pragma warning( disable : 4996)
#include<stdio.h>
#include<iostream>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>



int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum = sum + i;

	
	printf("1+2+3+...+100 = %d\n", sum);


	system("pause");
	return 0;

}
