#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Require user to enter a positive int for height
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height > 23 || height < 0);
    
    // Outer for loop to create rows and the extra # in each
    for (int row = 0; row < height; row++)
    {
        // Print height - 2 spaces
        for (int spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }
        // Print row quantity of hashes
        for (int hashes = 0; hashes < row; hashes++)
        {
            printf("#");
        }
        // Print 2 hashes + new line
        printf("##\n");
    }
}