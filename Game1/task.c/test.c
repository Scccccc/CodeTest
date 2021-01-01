#include "game.h"



void menu()
{
    printf("***********************\n");
    printf("*****1.play 0.exit*****\n");
    printf("***********************\n");
}


void game()
{
    char ret = 0;
    char board[ROW][COL] = {0};
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
    while(1)
    {
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if(ret != 'C')
        {
            break;
        }
        else if(ret == '*')
        {
            printf("player win\n");
        }
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = IsWin(board, ROW, COL);
        if(ret != 'C')
        {
            break;
        }
        else if(ret == '#')
        {
            printf("compuer win\n");
        }
        else
        {
            printf("draw\n");
        }
    }
}
void test()
{
    int input = 0;
    do
    {
        menu();
        printf("please pick one>:");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            printf("san zi qi game\n");
            break;
        case 0:
        printf("exit game\n");
            break;
        default:
            printf("pick again\n");
            break;
        }
    } while(input);
    
}
int main()
{
    test();
    return 0;
}