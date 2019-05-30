#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int Mystrlen1(char *arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int Mystrlen2(char *arr)
{
	if (*arr == '\0')
		return 0;
	else return  Mystrlen2(arr + 1) + 1;
}
int  Mystrlen3(char *arr)
{ 
	char *p = arr;
	while (*p != '\0')
	{
		p++;
	}
	return p - arr;
}
int main()
{
	char arr[] = "abcdefgh";
	int result=Mystrlen3(arr);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}