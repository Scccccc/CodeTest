#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int Fax(int n)
//{
//	if (n > 0)
//	{
//		return n * Fax(n - 1);
//	}
//	else if(n<=0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int miu = Fax(n);
//	printf("%d\n", miu);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abdsdasdasfvcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	if(*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcddsdsdsef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;

//
//int my_pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = my_pow(n, k);
//	printf("%d", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int tmp = 0;
//	int i = 0;
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i <= n - 3; i++)
//		{
//			tmp = a + b;
//			a = b;
//			b = tmp;
//		}
//		return tmp;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}

//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}

//int count_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_one(n);
//	printf("%d", count);
//
//	return 0;
//}

//int count_diff(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (m >> i & 1 != n >> i & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = count_diff(m, n);
//	printf("%d", ret);
//	return 0;


//void print(int n)
//{
//    int i = 0;
//    for(i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}