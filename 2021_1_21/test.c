#include <stdio.h>
#include <math.h>
// int is_prime(int i)
// {
//     int num = 2;
//     for(num = 2; num<sqrt(i); num++)
//     {
//         if(i%num == 0)
//         return 0;
//     }
//     if(num > sqrt(i))
//     {
//         return 1;
//     }
// }
// int main()
// {
//     int i = 0;
//     for(i = 101; i <= 200; i+=2)
//     {
//         if(is_prime(i) == 1)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// int is_runnian(int i)

// {
//     if((i%4==0)&&(i%100 != 0)||(i%400 == 0))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
    
// }

// int main()
// {
//     int i = 0;
//     for(i = 1000; i <= 2000; i++)
//     {
//         if(is_runnian(i) == 1)
//         {
//             printf("%d ", i);
//         }
//     }
        
//     return 0;
// }


// int swap(int *pa, int *pb)
// {
//     int tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("%d %d", a, b);
//     swap(&a, &b);
//     printf("\n%d %d", a, b);
//     return 0;
// }

int mult(int n)
{
    int i = 0;
    for(i = 1; i <= n; i++)
    {
        int j = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d * %d = %-2d ", i, j, i*j);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    mult(n);
    return 0;
}