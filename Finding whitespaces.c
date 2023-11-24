#include <stdio.h>
int main()
{
    char str[100]; // Input string with size 100
    int words = 0, newline = 0, characters = 0; // Counter variables
    int i; // Loop variable
    
    // Using fgets to read input along with spaces
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            words++;
            if (str[i] == '\n')
            {
                newline++;
            }
        }
        else
        {
            characters++;
        }
    }

    // Adjust the word and newline counts for cases where the last character is not a space
    if (characters > 0)
    {
        words++;
        newline++;
    }
    else if (words == 0) // Handle the case of an empty input
    {
        newline = 0;
    }

    printf("Total number of words : %d\n", words);
    printf("Total number of lines : %d\n", newline);
    printf("Total number of characters : %d\n", characters);
    return 0;
}
