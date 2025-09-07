#include <cs50.h>
#include <stdio.h> 

int calculate_change(int cents);

int main(void)
{
    // Prompt user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    } 
    while (cents < 0);

    // Calculate quarters
    int coins = calculate_change(cents);

    // Subtract value from cents
    printf("This many coins: %i \n", coins);
}

// Calculate quarters 
int calculate_change(int cents)
{
    // subtract quarters 
    int coins = 0;

    // Calculate quarters
    coins += cents / 25;
    cents = cents % 25;

    // calculate dimes
    coins += cents / 10;
    cents = cents % 10;

    // calulate nickels
    coins += cents / 5;
    cents = cents % 5;

    // calculate pennies
    coins += cents;

    // Sum
    return coins;
}