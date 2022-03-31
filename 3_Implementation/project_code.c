#include <stdio.h>
#include <stdlib.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int findwinner();
void grid();

int main()
{
    int gamer = 1, i, option;

    char select;
    do
    {
        grid();
        gamer = (gamer % 2) ? 1 : 2;

        printf("gamer %d, enter a number:  ", gamer);
        scanf("%d", &option);

        select = (gamer == 1) ? 'X' : 'Y';

        if (option == 1 && square[1] == '1')
            square[1] = select;
            
        else if (option == 2 && square[2] == '2')
            square[2] = select;
            
        else if (option == 3 && square[3] == '3')
            square[3] = select;
            
        else if (option == 4 && square[4] == '4')
            square[4] = select;
            
        else if (option == 5 && square[5] == '5')
            square[5] = select;
            
        else if (option == 6 && square[6] == '6')
            square[6] = select;
            
        else if (option == 7 && square[7] == '7')
            square[7] = select;
            
        else if (option == 8 && square[8] == '8')
            square[8] = select;
            
        else if (option == 9 && square[9] == '9')
            square[9] = select;
            
        else
        {
            printf("Invalid move ");

            gamer--;
            system("pause");
        }
        i = findwinner();

        gamer++;
    } while (i ==  - 1);
    
    grid();
    
    if (i == 1)
        printf("==>\agamer %d win ", --gamer);
    else
        printf("==>\aGame draw");

    system("pause");

    return 0;
}

//FUNCTION TO RETURN GAME STATUS

int findwinner()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

void grid()
{
    system("cls");
    printf("\n\n\twelcome to the game\n\n");

    printf(" For gamer 1 (X)  - For gamer 2 (Y)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("-----|-----|-----\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("-----|-----|-----\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
