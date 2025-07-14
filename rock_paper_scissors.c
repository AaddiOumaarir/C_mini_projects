#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main(){
    srand(time(NULL));
    char continue_ = 'y'; // ask to continue gaming
    char moves[3] = {'P', 'R', 'S'}; // list of possible moves
    char choice = '\0'; // the human player choice

    int computer_move = 0; 
    
    while(continue_ == 'y'){
    printf("    **** Paper, rock, scissors ****\n\n");
    printf("choose your move (P for paper, R for rocks and S for scissors): ");
    computer_move = rand() % 3; // the computer move

    scanf(" %c", &choice);
    choice = toupper(choice);
    switch(choice){
        case 'P':
            if(computer_move == 0){
                printf("You chose paper computer chose paper. It's a tie !!\n");
            }
            else if(computer_move == 1){
                printf("You chose paper computer chose rock. You lose :(\n");
            }
            else{
                printf("You chose paper computer chose scissors. You win :)\n");
            }
            break;
        case 'R':
                if(computer_move == 0){
                    printf("You chose rock computer chose paper. You lose :(\n");
                }
                else if(computer_move == 1){
                    printf("You chose rock computer chose rock. It's a tie !!\n");
                }
                else{
                    printf("You chose rock computer chose scissors. You win :)\n");
                }
                break;
        case 'S':
                if(computer_move == 0){
                    printf("You chose scissors computer chose paper. You win :)\n");
                }
                else if(computer_move == 1){
                    printf("You chose scissors computer chose rock. You lose :(\n");
                }
                else{
                    printf("You chose scissors computer chose scissors. It's a tie !!\n");
                }
                break;
        default:
                printf("You've entered invalid input !!\n");
                continue;
        
        
        
    }
    printf("Do you want to play again (y/n): ");
    scanf(" %c", &continue_);
    }



    return 0;
}