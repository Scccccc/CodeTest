#include <stdio.h>

int my_strlen(char* arr)
{
    if(*arr != '\0')
    {
        return 1+my_strlen(arr+1);
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    char arr[] = {"123llllll"};
    int len = my_strlen(arr);
    printf("%d", len);
    return 0;
}


#include <stdio.h>
int Fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    else
    {
        return Fib(n-1)+Fib(n-2);
    }
    
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d ", ret);
    return 0;
}

#include <stdio.h>


int My_bit_one(int n)
{
    int count = 0;
    while(n)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = My_bit_one(n);
    printf("%d", ret);
    return 0;
}


#include <stdio.h>


int My_bit_one(int n)
{
    int count = 0;
        int i = 0;
        for(i = 0; i<32;i++)
        {
            if(((n>>i)&1) == 1)
            {
                count++;
            }
        }
    return count;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = My_bit_one(n);
    printf("%d", ret);
    return 0;
}

#include <stdio.h>

void Print_table(int n)
{
    int i = 0;
    for(i = 1; i<=n; i++)
    {
        int j = 0;
        for(j = 1; j<=i; j++)
        {
            printf("%d*%d = %-3d ", i, j, i*j);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    Print_table(n);
    return 0;
}