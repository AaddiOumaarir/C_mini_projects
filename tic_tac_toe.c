#include <stdio.h>
void printboard();
void makemove();

char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };


int main(){

    printf("    *** TIC TAC TOE*** \n");
    printboard();
    makemove();
    return 0;
}

void printboard(){
    

    
    printf("%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n ", board[0][0], board[0][1], board[0][2], board[1][0], board[1][1], board[1][2], board[2][0], board[2][1], board[2][2]);

}
void makemove(){
    char move='\0';
    char player = 'X';
    
    for (int i=1; i <= 9; i++){
        if(player == 'X'){
            printf("X, please choose a number 1-9: ");
            scanf(" %c", &move);
            player = 'O';
            printboard();
        }
        else{
            printf("O, please choose a number 1-9: ");
            scanf(" %c", &move);
            player = 'X';
            printboard();
        }

    }
}