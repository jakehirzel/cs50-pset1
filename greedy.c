#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float change;
    
    // Propmt for change required, validate that it's more than zero
    do
    {
        printf("How much change do you need?\n");
        change = GetFloat();
    }
    while (change <= 0);
    
    // Convert to pennies, round, change from float to int
    int pennies = round(change * 100);
    
    // Create variable for total number of coins
    int coins = 0;
    
    // Subtract quartiers until change less than 25
    while (pennies > 24)
    {
        pennies = pennies - 25;
        coins++;
    }
    // Subtract dimes until change less than 10
    while (pennies > 9)
    {
        pennies = pennies - 10;
        coins++;
    }    
    // Subtract nickels until change less than 5
    while (pennies > 4)
    {
        pennies = pennies - 5;
        coins++;
    }    
    // Subtract pennies until change less than 1
    while (pennies > 0)
    {
        pennies = pennies - 1;
        coins++;
    }    
    // Print total coins
    printf("%i\n", coins);
}