//Mila Ismaili Marandi,Project3,CS50//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getUserChoice(){    //First function,is to get a users input, by asking R,P or S//

    int option;
    
    while(1){    //Using 1 as True, 0 as False, no boolean//

        printf("\nLets play a game! Choose: 1 = Rock, 2 = Paper; 3 = Scissors ");

        scanf("%d", &option);

        if(option < 1 || option > 3){

            printf("\nError. Invalid choice. Try again!!");  //If a user put a different number(not1-3) thats an error//

        }

        else{

            break;

        }

    }

    return option;  //we get a return here, thats why its an 'int' at the beginning//

}

void printComputerChoice(int choice){  //Second function is to make up the rules of the game, since we are playing against the computer//

    if(choice == 1){

        printf("\nComputer chose Rock");

    }

    else if(choice == 2){

        printf("\nComputer chose Paper");

    }

    else{

        printf("\nComputer chose Scissors");

    }

}

void determineWinner(int player, int computer) //Third function is to determine the winner of the game//
{

    if((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)){

        printf("\nYou win!");

    }

    else if(player == computer){

        printf("\nTie!");

        printf("\nTry again.");

    }

    else{

        printf("\nComputer wins!");

    }

}

int playAgain(){   //Last function is to ask a user if he wants to play again or exit//
    
    int pa_choice;
    printf("\nDo you want play again? 1 = yes, 0 = no ");
    scanf("%d", &pa_choice);
    
    if (pa_choice == 1){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main()

{

    int player_g;
	int option_g;
	int computer_g;
	int gameOver = 0;
	
	
	srand(time(NULL));
    while(!gameOver)

    {
        
        computer_g = 1 + rand() % 3;

        player_g = getUserChoice();

        printComputerChoice(computer_g);

        determineWinner(player_g, computer_g);
        gameOver = playAgain();
    }

    return 0;

}

//Thank you//