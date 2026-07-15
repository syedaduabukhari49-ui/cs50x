#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // take height(1-8)
    do
    {
        height = get_int("Height: ");
    }while (height < 1 || height > 8);
    // height
    for (int row = 0; row < height; row++)
    {
        // empty
        for (int spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }
        // structure
        for (int hashes = 0; hashes < row + 1; hashes++)
        {
            printf("#");
        }

        printf("\n");
    }
}
