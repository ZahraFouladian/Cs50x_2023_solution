#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size;
    int end_size;
    int year = 0;
    //start size is greater than or equal to 9
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);
    //end size must be greater than end size
    do
    {
        end_size = get_int("End size: ");
    }
    while(end_size < start_size);

    //Calculate number of years until we reach threshold

    while(start_size < end_size)
    {
        start_size = start_size + start_size/3 - start_size/4;
        year = year + 1;
    }
    //Print number of years
    printf("Years: %i\n", year);
}