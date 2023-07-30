#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int m = strlen(argv[1]);
    for (int i = 0; i < m; i++)
    {
        if (isdigit(argv[1][i]))
        {
            continue;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    string text = argv[1];
    int key = atoi(text);
    key = key % 26;
    string word = get_string("plaintext:   ");
    int len_word = strlen(word);
    for (int i = 0; i < len_word; i++)
    {
        if (isalpha(word[i]))
        {
            if (islower(word[i]))
            {
                if (word[i] + key > 122)
                {
                    word[i] = word[i] + key - 122 + 96;
                }
                else
                {
                    word[i] = word[i] + key;
                }
            }
            else
            {
                if (word[i] + key > 90)
                {
                    word[i] = word[i] + key - 90 + 64;
                }
                else
                {
                    word[i] = word[i] + key;
                }
            }
        }
    }
    printf("ciphertext: %s\n", word);
}