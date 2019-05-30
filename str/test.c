#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
char *Mystrcpy(char *dest, char *src)
{
	char *ret = dest;
	assert(dest);
	assert(src);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
char *Mystrcat(char *dest, char *src)
{
	assert(dest);
	assert(src);
	char *ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
const char *Mystrstr(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	const char *s1 = NULL;
	const char *s2 = NULL;
	const char *start = str1;
	while (*start != '\0')
	{
		s1 = start;//s1回退到上一次的下一个位置
		s2 = str2;//s2回退到str2的起始位置
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		start++;
		if (*s1 == '\0')
		{
			return NULL;
		}
		if (*s2 == '\0')
		{
			return start;
		}
	}
}
char *Mystrcmp(char* arr1, char* arr2)
{
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{
		return 1;
	}
	else return -1;
}
int main()
{
	char arr1[] = "abcdefgh";
	char arr2[] = "AAAAAA";
	Mystrcat(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}