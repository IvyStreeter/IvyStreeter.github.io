#include <cs50.h>
#include <stdio.h> 

long step_function(long CreditNo);

int main(void)
{
    long CreditNo;
    do
    {
        CreditNo = get_long("Credit Card Number: ");
    }
    while (CreditNo < 0);

    // Hans Peter Luhn algorithm
    long test = step_function(CreditNo);

    printf("This many coins: %ld \n", test);

    return 0;
}

long step_function(long CreditNo) 
{
    // digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.

    // Negative step function
    long result = 0;

    for (long n = CreditNo / 10; n> 0; n/=100) {
    int digit = n %10;
    result += digit;
    }

    return result;

    // Add the sum to the sum of the digits that weren’t multiplied by 2.
}



// If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!