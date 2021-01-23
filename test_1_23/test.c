#include <stdio.h>
#include <string.h>
// int Fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     while(n>2)
//     {
//         c = a+b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = Fib(n);
//     printf("%d ", ret);
//     return 0;
// }

// int Fib(int n)
// {
//     if(n<=2)
//     {
//         return 1;
//     }
//     else
//     {
//         return Fib(n-1) + Fib(n-2);
//     }
    
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = Fib(n);
//     printf("%d", ret);
//     return 0;
// }

// void print(int n)
// {
//     if(n>9)
//     {
//         print(n/10);
//     }
//     printf("%d ", n % 10);
// }
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     print(num);

//     return 0;
// }

// int fuct(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fuct(n-1);
//     }
    
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int ret = fuct(n);
//     printf("%d", ret);
//     return 0;
// }


// void fuct(int n)
// {
//     int ret = 1;
//     int i = 0;
//     for(i = 1; i <= n; i++);
//     {
//         ret = ret*n;
//         n--;
//     }
//     printf("%d\n", ret);


// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     fuct(n);

//     return 0;
// }


// int my_strlen(char *arr)
// {   
//     int count = 0;
//     while(*arr != '\0')
//     {
//         count++;
//         arr++;
//     }
//     return count;
// }
// int main()
// {
//     char arr[] = "helwwwwlo bit";
//     printf("%d\n", my_strlen (arr));
//     return 0;
// }

// int my_strlen(char *arr)
// {
//     if(*arr != '\0')
//     {
//         return 1+my_strlen(arr+1);
//     }
// }
// int main()
// {
//     char arr[] = "hello girl";
//     int ret = my_strlen(arr);
//     printf("%d\n", ret);
//     return 0;
// }

// int my_strlen(char *string)
// {
//     int count = 0;
//     if(*string != '\0')
//     {
//         count++;
//         string++;
//     }
//     return count;
// }

// int reverse_string(char * string)
// {
//     int len = my_strlen(string);
//     char tmp = 0;
//     tmp = *string;
//     *string = *(string + len -1);
//     *(string + len -1) = '\0';
//     if(my_strlen(string+1)>1)
//     {
//         reverse_string(string+1);
//     }
//     *(string+len-1) = tmp;
// }
// int main()
// {
//     char string[] = "abc";
//     reverse_string(string);
//     printf("%s\n", string);
//     return 0;
// }

int DigitSum(int n)
{
    if(n>9)
    {   
        return n % 10 + DigitSum(n/10);

    }
    else
    {
        return n;
    }
    
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = DigitSum(n);
    printf("%d\n", ret);
    return 0;
}