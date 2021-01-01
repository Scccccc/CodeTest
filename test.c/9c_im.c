// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     for(i = 10000; i <= 99999; i++)
//     {
//         int j = 0;
//         int sum = 0;
//         for(j = 10 ; j<=10000; j *= 10)
//         {
//             sum += ((i/j)*(i%j));
//         }
//         if(sum == i)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("a=%d,b=%d", &a, &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("a=%d,b=%d", a, b);
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     double bmi = 0;
//     int weight = 0;
//     int high = 0;
//     scanf("%d %d", &weight, &high);
//     bmi = weight/((high/100.0)*(high/100.0));
//     printf("%.2lf", bmi);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d %d", &a, &b, &c);
//     double p = (a+b+c)/2.0;
//     double circumference = a+b+c;
//     double area = sqrt(p*(p-a)*(p-b)*(p-c));
//     printf("circumference=%.2lf area=%.2lf", circumference, area);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int age = 0;
//     scanf("%d", &age);
//     long long s = 31560000*age;
//     printf("%lld", s);
//     return 0;
// }


// #include <stdio.h>

// int my_strlen(char* arr)
// {
//     if(*arr != '\0')
//     {
//         return 1+my_strlen(arr+1);
//     }
//     else
//     {
//         return 0;
//     }
    
// }
// int main()
// {
//     char arr[] = {"123llllll"};
//     int len = my_strlen(arr);
//     printf("%d", len);
//     return 0;
// }


// #include <stdio.h>
// int Fib(int n)
// {
//     if(n<=2)
//     {
//         return 1;
//     }
//     else
//     {
//         return Fib(n-1)+Fib(n-2);
//     }
    
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = Fib(n);
//     printf("%d ", ret);
//     return 0;
// }

// #include <stdio.h>


// int My_bit_one(int n)
// {
//     int count = 0;
//     while(n)
//     {
//         n = n&(n-1);
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = My_bit_one(n);
//     printf("%d", ret);
//     return 0;
// }


// #include <stdio.h>


// int My_bit_one(int n)
// {
//     int count = 0;
//         int i = 0;
//         for(i = 0; i<32;i++)
//         {
//             if(((n>>i)&1) == 1)
//             {
//                 count++;
//             }
//         }
//     return count;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = My_bit_one(n);
//     printf("%d", ret);
//     return 0;
// }

// #include <stdio.h>

// void Print_table(int n)
// {
//     int i = 0;
//     for(i = 1; i<=n; i++)
//     {
//         int j = 0;
//         for(j = 1; j<=i; j++)
//         {
//             printf("%d*%d = %-3d ", i, j, i*j);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     Print_table(n);
//     return 0;
// }