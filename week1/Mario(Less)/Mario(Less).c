#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Height must be between 1 and 10
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    for (int i = 1; i <= height; i++)
    {
        for (int n = 1; n <= height - i; n++)
        {
            printf(" ");
        }
        for (int m = 1; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}