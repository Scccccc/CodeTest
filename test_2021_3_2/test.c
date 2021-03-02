#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>


//strtok

//int main()
//{
//	char arr1[] = "yishengaaaa@gmail.com";
//	char arr2[30] = { 0 };
//
//	strcpy(arr2, arr1);
//	char* p = "@.";
//
//	char* ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p));
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "yishengaaaa@gmail.com";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr1);
//	char* p = "@.";
//	printf("%s\n", strtok(arr2, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));
//	return 0;
//}


//strerror - 错误报告函数
//把错误码转换为对应的错误信息，返回错误信息对应字符串的起始地址

//int main()
//{
//	//printf("%s\n", strerror(403));
//	//printf("%s\n", strerror(0));
//
//	FILE * pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("fopen");
//	}
//	return 0;
//}

//toupper
//tolower

//int main()
//{
//	char arr[10] = { 0 };
//	gets(arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}