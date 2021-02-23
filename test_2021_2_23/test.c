#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <windows.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Min(int x, int y)
//{
//	return x -y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****  1.Add   2.Min    *****\n");
//	printf("*****  3.Mul   4.Div    *****\n");
//	printf("*****      0.EXIT       *****\n");
//	printf("*****************************\n");
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int (*Farr[])(int, int) = { 0, Add,Min,Mul,Div };
//	do
//	{
//		menu();
//		printf("plese choose one\n");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("EXIT\n");
//			break;
//		}
//		else if (input>=1 && input <=4)
//		{
//			printf("input two number\n");
//			scanf("%d%d", &x, &y);
//			int ret = Farr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("input err\n");
//		}
//
//
//	} while (input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Min(int x, int y)
//{
//	return x -y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*p)(int, int))
//{
//	printf("input two number\n");
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int ret = p(x, y);
//	printf("ret = %d", ret);
//	printf("\n");
//
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****  1.Add   2.Min    *****\n");
//	printf("*****  3.Mul   4.Div    *****\n");
//	printf("*****      0.EXIT       *****\n");
//	printf("*****************************\n");
//}
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("plese choose one\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				calc(Add);
//				break;
//			case 2:
//				calc(Min);
//				break;
//			case 3:
//				calc(Mul);
//				break;
//			case 4:
//				calc(Div);
//				break;
//			case 0:
//				printf("Exit\n");
//				break;
//			default:
//				printf("input err\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}

//void Bobule_sort(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,9,6,5,8,4,3,6,0,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bobule_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = buf1;
//		buf1 = buf2;
//		buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < width; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}