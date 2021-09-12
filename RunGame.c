#include<stdio.h>
#include"Game.h"

void Banner(){
    printf("*****************************\n");
    printf("**1 star*****---*****2 quit**\n");
    printf("*****************************\n");
}
void Chest(){
    Banner();
    char Board[ROW][COL];
    int input=0;
    do
    {
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            Initiate_Board(Board,ROW,COL);
            Display_Board(Board,ROW,COL);
            Move_Board(Board,ROW,COL);
            break;
        case 2:
            printf("case2\n");
            break;
        default:
            printf("default\n");
            break;
        }
    } while (input);
    
}

int main(){
    Chest();
    return 0;
}