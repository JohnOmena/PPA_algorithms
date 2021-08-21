#include <stdio.h>

int maxi(int x,int y) {
    return x > y ? x:y;
}

void show(int valueM,int valueN,int c[][valueN]){

     int i,j;

     for(i = 0; i < valueM; i++){

        for(j = 0; j < valueN; j++){
            printf("%d\t", board01[i][j]);
        }
        printf("\n\n");
    }
}

int coin_collect(int board[][valueN], int valueM, int valueN){

    int i = 1,j = 1, board01[valueM][valueN];
    board01[0][0] = board[0][0];

    while(board[i][0]!= - 1 && i < valueM ){

        board01[i][0]=board01[i-1][0]+board[i][0];
        i = i + 1;
    }

    for(;i < valueM; i++){
      board01[i][0] = -6;
    }

    while(j < valueN && board[0][j] != - 1){
        board01[0][j] = board01[0][j - 1] + board[0][j];
        j = j + 1;
    }

    for(;j < valueN; j++){
        board01[0][j]= -6;
    }

    show(valueM,valueN,board01);

    printf("\n\n\n\n");

    for(i = 1; i < valueM; i++){

         for(j = 1; j < valueN; j++){

            if(board[i][j] != -1){
                board01[i][j] = maxi(board01[i - 1][j], board01[i][j - 1]) + board[i][j];
            } else{
                board01[i][j]=-6;
            }

         }
    }

    show(valueM, valueN, board01);
    return board01[valueM - 1][valueN - 1];
}

int main(void){

     int board[3][5]={0,-1,0,1,0,
                 1,0,0,1,-1,
                 0,-1,0,1,-1};

     printf("%d",coin_collect(board), 3, 5);
     return 0;
}
