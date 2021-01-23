// #include <stdio.h>
// int MAX(int a, int b)
// {
//     if(a>b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
    
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     int max = MAX(a, b);
//     printf("%d", max);
//     return 0;
// }


#include <stdio.h>
#include <memory.h>
// int sum(int a)
// {
//     int c = 0;
//     static int b = 3;
//     c += 1;
//     b += 2;
//     return (a + b + c);
// }
// int main()
// {
//     int i;
//     int a = 2;
//     for (i = 0; i < 5; i++) 
//     { 
//         printf("%d,", sum(a)); 
//     } 
// } 
// int maia()
// {
//     char arr[] = "hello zhang ";
//     memset(arr, 'x', 5);
//     printf("%s\n", arr);
//     return 0;
// }

// int is_prime(int i)
// {
//     int i = 0;
//     int flag = 1;
//     for(i = 1, i < 200; i++)
//     {
//         if(flag % i == 0)
//         return 0;
//     }
//     if(flag % i ==1)
//     {
//         return = 0;
//     }
// }
// int main()
// {
//     int i = 0
//     for(i=100; i<200; i++)
//     {
//         if(is_prime(i) == 1)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// int binary_search(int arr, int k, int sz)
// {
//     int left = 0;
//     int right = sz-1;
//     while(left <= right)
//     {
//         int mid = (left + right)/2;
//         if(left < right)
//         {
//             left++;
//             right--;
//         }
//         else
//         {
//             left--;
//             right++;
//         }
        
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0])-2;
//     int ret = binary_search(arr, k, sz);
//     return 0;
// }