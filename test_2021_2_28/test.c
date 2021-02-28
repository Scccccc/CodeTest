#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

//长度不受限制的字符串操作函数
//strcpy
//strcat
//strcmp

//strcpy库函数模拟实现

//int main()
//{
//	char arr1[20] = "**************";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcpy(char* dest, const char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, const char* src)
//{
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//


//char* my_strcpy(char* dest, const char* src)
//{
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//拷贝字符串，包括‘\0’
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[20] = "***************";
//	char arr2[] = "holle bich";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//strcat - 字符串追加

//int main()
//{
//	char arr1[20] = "holle ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找到目的地的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}


//strcmp - 字符串比较
//字符串比较 - 比较的是两个字符串对应位置的ASCII码值

//int main()
//{
//	int ret = strcmp("abq", "abcdef");//第一个字符串大于第二个字符串返回大于0的值
//									  //第一个字符串等于第二个字符串返回0
//									  //第一个字符串小于第二个字符串返回小于0的值
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = my_strcmp("abq", "abcdef");
//	printf("%d\n", ret);
//	return 0;
//}

//长度受限制的字符串操作函数
//strncpy
//strncat
//strncmp


//int main()
//{
//	char arr1[] = "**********";
//	char arr2[] = "hello";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	strncat(arr, "bit", 3);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int ret = strncmp("abq", "abcdef", 3);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr - 在一个字符串中找一个子字符串

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcd";
//	char* ret= strstr(arr1, arr2);//在arr1中查找arr2字符串第一次出现的位置
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("cant find\n");
//	return 0;
//}

