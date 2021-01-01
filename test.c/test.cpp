#include <stdio.h>

int main()
{
    int input = 0;
    printf("Are u single? (1/0):>");
    scanf("%d", &input);
    if(input == 1)
    {
        printf("Good job keep it\n");
    }
    else
    {
        printf("Son of a bitch\n");
    }
    
    return 0;
}