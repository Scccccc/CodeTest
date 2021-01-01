#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");

again:
    printf("Attention your computer is about to shutdown please input PRON will cancel the shutdown\n");
    scanf("%s", input);
    if (strcmp(input, "PRON") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
    
}