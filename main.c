#include <stdio.h>
#include <stdlib.h>
//global variables
char board[3][3]= {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int choice;
char *ptr;
char mark;
//making the shape of the board and updating it automatically with each input choice
void print()
{
    system("cls");
    printf("\t<TIC TAC TOE GAME>\n");
    printf("Player 1 (x)\t - \t Player 2 (o)\n");
    printf(" %c\t| %c\t| %c\t\n",board[0][0],board[0][1],board[0][2]);
    printf("________|_______|_______\n");
    printf(" %c\t| %c\t| %c\t\n",board[1][0],board[1][1],board[1][2]);
    printf("________|_______|_______\n");
    printf(" %c\t| %c\t| %c\t\n",board[2][0],board[2][1],board[2][2]);
    printf("________|_______|_______\n");

}
//resposible for assigning the character 'x' or 'o' after taking the specific place from the user
int insert()
{

    if(choice ==1 && board[0][0]==' ')
    {
        ptr=&board[0][0];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==2 && board[0][1]==' ')
    {
        ptr=&board[0][1];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==3 && board[0][2]==' ')
    {
        ptr=&board[0][2];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==4 && board[1][0]==' ')
    {
        ptr=&board[1][0];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==5 && board[1][1]==' ')
    {
        ptr=&board[1][1];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==6 && board[1][2]==' ')
    {
        ptr=&board[1][2];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==7 && board[2][0]==' ')
    {
        ptr=&board[2][0];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==8 && board[2][1]==' ')
    {
        ptr=&board[2][1];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else if(choice ==9 && board[2][2]==' ')
    {
        ptr=&board[2][2];
        *ptr=mark;
        printf("%c",*ptr);
        print();
        return 1;
    }
    else
    {
        return 0;
    }
}
int isWinning()
{
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2] != ' ' )
    {   return 1;}
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] != ' ')
    {
        return 1;}
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] != ' ')
    {
        return 1;}
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] != ' ')
    {
        return 1;}
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] != ' ')
    {
        return 1;}
    else if (board[0][2] == board[1][2]&& board[1][2] == board[2][2] != ' ')
    {
        return 1;}
    else if (board[0][0] == board[1][1]&& board[1][1] == board[2][2] != ' ')
    {
        return 1;}
    else if (board[0][2]== board[1][1]&& board[1][1] == board[2][0] != ' ')
    {
        return 1;}
    else if (board[0][0] != board[0][1] !=board[0][2] != board[1][0] !=  board[1][1] !=  board[1][2] !=  board[2][0] !=  board[2][1] !=  board[2][2])
    {return 0;}
    else
    {
        return 0;
    }

}
//we specified 9 turns to make sure that the user doesn’t over use the boxes of the board
//each turn a user has the choice to play if player one : he plays with character 'x', if player two: he plays with character 'o'.
int main()
{
    print();
    for (int turn=1; turn<10; turn++)
    {
        if(turn%2!=0)
        { do
            {
                mark= 'x';
            printf("Player 1 turn: ");
            scanf("%d",&choice);
            }
            while (insert()==0);
            if (isWinning()==1){
                printf("Player 1 is the winner \n");
            }
            else if (turn==9 && isWinning()==0){
                printf("Tie");}
        }
        if(turn%2==0)
            {
                do
                {
                    mark= 'o';
                printf("Player 2 turn: ");
                scanf("%d",&choice);
                }
                while(insert()==0);
                if (isWinning()==1){
                printf("Player 2 is the winner");}
                else if (turn==9 && isWinning()==0){
                printf("Tie");}
            }
    }
    return 0;
}

