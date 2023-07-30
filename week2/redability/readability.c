#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int calculate_letters(string contex);
int calculate_words(string contex);
int calculate_sentences(string contex);

int main(void)
{

    string contex = get_string("Text: ");
    // Calculate the number of letters
    float letter = calculate_letters(contex);
    // Calculate the number of word
    float word = calculate_words(contex);
    // Calculate the number of sentence
    float sentence = calculate_sentences(contex);
    // Calculate the grade
    float L = (letter * 100) / word;
    float S = (sentence * 100) / word;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    // print the grade
    int Grade = round(index);
    if (Grade < 1)
    {
        printf("\n");
        printf("Before Grade 1\n");
    }
    else if (Grade > 16)
    {
        printf("\n");
        printf("Grade 16+\n");
    }
    else
    {
        printf("\n");
        printf("Grade %i\n", Grade);
    }
}

int calculate_letters(string contex)
{
    int count = 0;
    int len_text = strlen(contex) + 1;
    for (int i = 0; i < len_text; i++)
    {
        if (isalpha(contex[i]))
        {
            count = count + 1;
        }
    }
    return count;
}

int calculate_words(string contex)
{
    int count = 1;
    int len_text = strlen(contex) + 10;
    for (int i = 0; i < len_text; i++)
    {
        if (contex[i] == ' ')
        {
            count = count + 1;
        }
    }
    return count;
}

int calculate_sentences(string contex)
{
    int count = 0;
    int len_text = strlen(contex);
    for (int i = 0; i < len_text; i++)
    {

        if ((contex[i] == '.' || contex[i] == '!' || contex[i] == '?'))
        {
            count = count + 1;
        }
    }
    return count;
}
