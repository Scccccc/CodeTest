#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d", c);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	int b = 2;
//	int c = a | b;
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("%d", b);
//	return 0;
//}


//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct stu s = { "shuncheng", 20, "nan" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);//结构体变量 . 结构体成员
//
//	struct stu* ps = &s;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	return 0;



//int main()
//{
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//	}
//	return 0;
//}

//void menu()
//{
//	printf("*******************************\n");
//	printf("*********1.start game *********\n");
//	printf("*********0.exit game  *********\n");
//	printf("*******************************\n");
//}
//
//void my_game()
//{
//	int n = 0;
//	srand((unsigned int)time(0));
//	int guess = rand() % 100;
//	while (1)
//	{
//		printf("input number\n");
//		scanf("%d", &n);
//		if (n > guess)
//		{
//			printf("big\n");
//		}
//		else if (n < guess)
//		{
//			printf("small\n");
//		}
//		else
//		{
//			printf("bingo\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int num = 0;
//	menu();
//	scanf("%d", &num);
//	if (num == 1)
//	{
//		my_game();
//	}
//	else if (num == 0)
//	{
//		printf("beybey\n");
//	}
//	else
//	{
//		printf("input error retry\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int score = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int days[] = { 31, 28, 31, 31, 30, 31, 30, 31, 30, 31, 30, 31 };
//	while (~scanf("%d%d", &year, &month))
//	{
//		int day = days[month - 1];
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			if (month == 2)
//				day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}