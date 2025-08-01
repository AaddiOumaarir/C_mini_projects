#include <stdio.h>
#include <stdbool.h>
void printboard();
void makemove();
int change_board(char move, char player);
bool checkwinner();

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
    
    printf("%c | %c | %c\n%c | %c | %c\n%c | %c | %c\n", board[0][0], board[0][1], board[0][2], board[1][0], board[1][1], board[1][2], board[2][0], board[2][1], board[2][2]);

}
void makemove(){

    char player = 'X';
    char move = '\0';
    int valid = 0;
    for (int i=1; i <= 9;){
        
        printf("%c, please choose a number 1-9: ", player);
        scanf(" %c", &move);
        valid = change_board(move, player);
        if (valid)
        {
            printboard();
            if(checkwinner()){
                printf("%c is the winner :) ", player);
                break;
            }

            player = (player == 'X' ) ? 'O':'X';
            i++;
        }
        else{
            printf("Invalid input.\n");
        }
            
    }
    if (!checkwinner()) {
    printf("It's a draw!!");
}

}

int change_board(char move, char player){

    int row = 1; 
    int col = -1;

    switch (move)
    {
    case '1':
        row = 0;  col = 0;break;
    case '2':
        row = 0;  col = 1;break;
    case '3':
        row = 0;  col = 2;break;
    case '4':
        row = 1;  col = 0;break;
    case '5':
        row = 1;  col = 1;break;
    case '6':
        row = 1;  col = 2;break;
    case '7':
        row = 2;  col = 0;break;
    case '8':
        row = 2;  col = 1;break;
    case '9':
        row = 2;  col = 2;break;

    
    default:
        return 0;
    }

    if (board[row][col] != 'X'&& board[row][col] != 'O')
    {
        board[row][col] = player;
        return 1;
    }

    else{
        return 0;
    }
    
    return 1;
}

bool checkwinner(){
    // cheking rows 
    for (int i = 0; i < 3; i++)
    {
        if(board[i][0]==board[i][1] && board[i][1] == board[i][2]){
            if(board[i][0] == 'X' || board[i][0] == 'O'){
                return true;
            }
        }
        
    }
    // checking for columns
    for (int j = 0; j < 3; j++)
    {
        if(board[0][j]==board[1][j] && board[1][j] == board[2][j]){
            if(board[0][j] == 'X' || board[0][j] == 'O'){
                return true;
            }
        }
        
    }
    // checking for the first diagonal

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        if(board[0][0] == 'X' || board[0][0] == 'O'){
                return true;
            }
    }
    // checking for second diagonal
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        if(board[0][2] == 'X' || board[0][2] == 'O'){
                return true;
            }
    }

    return false;
}

