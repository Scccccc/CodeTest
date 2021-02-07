#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//  1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//  2
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//assert - 断言-括号中的表达式如果为真，什么都不发生，括号中的表达式如果为假就会报错
//my_strcpy(char* dest, const char* src)
//{
//	int ret = dest;
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr[20] = "xxxxxxxxxxxxxxxxx";
//	char arr2[] = "abcdef";
//	char* p = arr2;
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

