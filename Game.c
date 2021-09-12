#include<stdio.h>
#include"Game.h"
void Initiate_Board(char Board[ROW][COL],int row, int col){
    int x=0;
    int y=0;
    for(x=0;x<ROW;x++){
        for(y=0;y<COL;y++){
            Board[x][y]=' ';
        }
    }
}
void Display_Board(char Board[ROW][COL],int row, int col){
    int x=0;
    int y=0;
    for(y=0;y<COL;y++){
        if(y==COL-1){
            for(x=0;x<ROW;x++){
                if(x==ROW-1){
                    printf(" %c ", Board[x][y]);
                    printf("\n");
                }
                else{
                    printf(" %c |", Board[x][y]);
                }
            }
        }
        else{
            for(x=0;x<ROW;x++){
                if(x==ROW-1){
                    printf(" %c ", Board[x][y]);
                    printf("\n");
                }
                else{
                    printf(" %c |", Board[x][y]);
                }
            }
            for(x=0;x<ROW;x++){
                if(x==ROW-1){
                    printf("---");
                    printf("\n");
                }
                else{
                    printf("---|");
                }
            }
        }
    }
}
void Move_Board(char Board[ROW][COL],int row, int col){
    int x=0;
    int y=0;
    while(1){
        scanf("%d %d", &x, &y);
        if(Board[x][y]==' '){
            Board[x][y]='*';
            Display_Board(Board,ROW,COL);
        }
        else{
            printf("This place have been occupied, move again!\n");
        }
        //check row
        int count_x=0;
        for(x=0;x<ROW;x++){
            for(y=0;y<COL;y++){
                if(Board[x][y]=='*'){
                    count_x++;
                }
            }
        }
        if(count_x==ROW){
            printf("win!\n");
            break;
        }
        // check column
        int count_y=0;
        for(y=0;y<COL;y++){
            for(x=0;x<ROW;x++){
                if(Board[x][y]=='*'){
                    count_y++;
                }
            }
        }
        if(count_y==COL){
            printf("win!\n");
            break;
        }
        // check corss line
        int count_c=0;
        for(x=0;x<ROW;x++){
            for(y=0;y<COL;y++){
                if(x==y){
                    if(Board[x][y]=='*'){
                        count_c++;
                    }
                }
                if(Board[x][y]==Board[y][x] && Board[x][y]=='*'){
                    count_c++;
                }
            }
        }
        if(count_c==ROW){
            printf("win!\n");
            break;
        }
    }
}