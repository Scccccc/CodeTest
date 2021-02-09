#include <stdio.h>
#include <string.h>

// int count_diff(int m, int n)
// {
//     int count = 0;
//     int tmp = m^n;
//     while(tmp)
//     {
//         tmp = tmp&(tmp-1);
//         count++;
//     }
//     return count;

// }

// int main()
// {
//     int m = 0;
//     int n = 0;
//     scanf("%d%d", &m, &n);
//     int ret = count_diff(m, n);
//     printf("%d\n", ret);
//     return 0;
// }


// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     if(n&(n-1) == 0)
//     printf("yes\n");
//     else
//     printf("No\n");
//     return 0;
// }


// void Miu(int n)
// {
//     int i = 0;
//     for(i = 1; i<=n;i++)
//     {
//         int j = 0;
//         for(j = 1; j<=i; j++)
//         {
//             printf("%d * %d = %-3d ", i, j, i*j);   
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     Miu(n);
//     return 0;
// }


// void print(int n)
// {
//     int i = 0;
//     for(i = 30; i>=0;i -= 2)
//     {
//         printf("%d ", (n>>i)&1);
//     }
//     printf("\n");
//     for(i = 31; i >= 1; i-=2)
//     {
//         printf("%d ", (n>>i)&1);
//     }
//     printf("\n");
// }

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     print(n);
//     return 0;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int *p = arr;
//     int i = 0;
//     for(i = 0; i<10; i++)
//     {
//         printf("%d ", *p);
//         p++;
//     }
//     return 0;
// }

// void reverse(char* str)
// {
//     int len = strlen(str);
//     char* left = str;
//     char* right = str+len-1;
//     while(left<right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// int main()
// {
//     char arr[100] = {0};
//     gets(arr);
//     reverse(arr);
//     printf("%s\n", arr);
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int n = 0;
//     int sum = 0;
//     scanf("%d%d", &a, &n);
//     int i = 0;
//     int k = 0;
//     for(i = 0; i<n; i++)
//     {
//         k = k*10+a;
//         sum += k;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

int main()
{
    int money = 0;
    scanf("%d", &money);
    int totol = 0;
    if(money>0)
    {
        totol = money * 2 -1;
    }
    printf("%d", totol);
    return 0;
}
