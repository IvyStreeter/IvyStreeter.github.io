#include <cs50.h>
#include <stdio.h> 

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt user for input
    int spaces;
    do
    {
        spaces = get_int("What is the spaces of the pyramid? ");
    } 
    while (spaces < 1 || spaces > 8);


    // Print a pyramid of that spaces
    for (int i = 0; i < spaces; i++)
    {
        print_row(spaces, i + 1);
    }
 
}


void print_row(int spaces, int bricks)
{
    for (int i = 0; i < (spaces - bricks); i++)
    {
        printf(".");
    }

    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("..");
        for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}