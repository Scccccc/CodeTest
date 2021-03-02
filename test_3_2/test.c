#include <stdio.h>
#include <string.h>
#include <assert.h>

// int main()
// {
//     char arr[] = "Hello world!";
//     printf("%d\n", strlen(arr));
//     return 0;
// }

// int my_strlen(const char* str)
// {
//     assert(str != NULL);
//     int count = 0;
//     while(*str)//当到到'\0'循环结束
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

// int main()
// {
//     char arr[] = "Hello world!";
//     int ret = my_strlen(arr);
//     printf("%d\n", ret);
//     return 0;
// }

// int my_strlen(const char* str)
// {
//     assert(str != NULL);
//     if(*str == '\0')
//     {
//         return 0;
//     }
//     else
//     {
//         return 1 + my_strlen(str + 1);
//     }
// }

// int main()
// {
//     char arr[] = "Hello world!";
//     int ret = my_strlen(arr);
//     printf("%d\n", ret);
//     return 0;
// }

// int my_strlen(const char* str)
// {
//     assert(str != NULL);
//     const char* startP = str;//把str赋给char*的指针变量，最后再拿str减去stratP就可以得出字符串个数
//     while(*str)
//     {
//         str++;
//     }
//     return str - startP;
// }

// int main()
// {
//     char arr[] = "Hello world!";
//     int ret = my_strlen(arr);
//     printf("%d\n", ret);
//     return 0;
// }