#include <stdio.h>

int main()
{
    char ch = 'w';
    char *pc = &ch;
    printf("%d\n", sizeof(pc));
    return 0;
}