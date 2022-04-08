#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int playerScore = 0, compScore = 0;
char playerName[20];
void player()
{
    int playerChoice, compChoise;
    int i = 0;
    while (i != 3)
    {
        printf("\nPlease select a chice from below--\n");
        printf("\n\tPress 0 for Rock\n");
        printf("\tPress 1 for Paper\n");
        printf("\tPress 2 for Scissor\n");
        printf("\n\tEnter Your Choice:");
        scanf("%d", &playerChoice);
        switch (playerChoice)
        {
        case 0:
            printf("\n\tComputer's Turn: ");
            srand(time(NULL));
            compChoise = rand() % 3;
            printf("\n\tComputer's Choice: %d\n", compChoise);
            if (playerChoice == 0 && compChoise == 2)
            {
                printf("\n\n\t\tCongrats! %s, you won!\n", &playerName);
                playerScore++;
            }
            else if (playerChoice == 0 && compChoise == 1)
            {
                printf("\n\n\t\tComputer Wins!\n");
                compScore++;
            }
            else if (playerChoice == 0 || compChoise == 0)
            {
                printf("\n\n\t\tIt's a Tie!\n");
                playerScore++;
                compScore++;
            }
            break;
        case 1:
            printf("\tComputer's Turn:\n");
            srand(time(NULL));
            compChoise = rand() % 3;
            printf("\n\tComputer's Choice: %d\n", compChoise);
            if (playerChoice == 1 && compChoise == 0)
            {
                printf("\n\n\t\t%s Wins!\n", playerName);
                playerScore++;
            }
            else if (playerChoice == 1 && compChoise == 2)
            {
                printf("\n\n\t\tComputer Wins!\n");
                compScore++;
            }
            else if (playerChoice == 1 && compChoise == 1)
            {
                printf("\n\n\t\tIt's A Tie\n");
                playerScore++;
                compScore++;
            }
            break;
        case 2:
            printf("\tComputer's Turn:\n");
            srand(time(NULL));
            compChoise = rand() % 3;
            printf("\n\tComputer's Choice: %d\n", compChoise);
            if (playerChoice == 2 && compChoise == 1)
            {
                printf("\n\n\t\t%s Wins!\n", playerName);
                playerScore++;
            }
            else if (playerChoice == 2 && compChoise == 0)
            {
                printf("\n\n\t\tComputer Wins!\n");
                compScore++;
            }
            else if (playerChoice == 2 && compChoise == 2)
            {
                printf("\n\n\t\tIt's A Tie\n");
                playerScore++;
                compScore++;
            }
            break;
        default:
            printf("\n\tInvalid Choice, Choose Again!\n");
        }
        printf("\t%s, Your Score is:%d\n", playerName, playerScore);
        printf("\tComputer's Score is:%d\n", compScore);

        i++;
    }
    if (playerScore > compScore)
    {
        printf("\n\n\t\t\tCongrats %s, You Won the Game!!\n",playerName);
    }
    else if (compScore > playerScore)
    {
        printf("\n\n\t\t\tComputer Wins the Game!\n");
    }
    else
    {
        printf("\n\n\t\tIt's a Tie!\n");
    }
}
void rules()
{
    printf("\t_______________Welcome To The Game: Rock, Paper & Scissor's_______________\n\n");
    printf("\tRULES FOR THE GAME:-\n\n");
    printf("\t->Rock Crushes Scissor. So, the Player who Choose Rock will get a point.\n");
    printf("\t->Paper Covers Rock. This means that Paper wins and a point will be given to the Player who choses Paper.\n");
    printf("\t->Scissor Cuts Paper. Therefore one point will be rewarded to whoever select Scissor in front of Paper.\n");
    printf("\t->Only 2 Players will be playing the Game, One is the Computer And Second is you my friend!\n");
    printf("\t->There will be three chances. Whoever get more points win!!\n");
    printf("\t->Scores will be displayed at the End of each Round.\n\n");
}
void main()
{
    rules();
    printf("\tPlease enter your Name: ");
    scanf(" %s", &playerName);
    printf("\n\tPlayer 1 is %s & Player 2 is Computer.\n", playerName);
    printf("\n\tYou have 3 chances to Win the Game\n\tLet's Start! Best of Luck!");
    //system("cls");
    printf("\n\tThe Game begins! Let the best Player wins!!\n");
    printf("\n\t%s, your turn:-\n",playerName);
    player();
}