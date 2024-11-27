#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 // Defines the size of the input buffers for strings.
#include "manipulating.h"

void manipulating(void)
{
    printf("*** Start of Concatenating Strings Demo ***\n");
    // Declare two character arrays (buffers) to store the input strings.
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    // Start a loop to repeatedly ask for user input until "q" is entered.
    do
    {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);     // Reads the first string input from the user.
        string1[strcspn(string1, "\n")] = '\0'; // Removes the newline character from the input.
        if (strcmp(string1, "q") != 0)
        {
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);     // Reads the second string input.
            string2[strcspn(string2, "\n")] = '\0'; // Removes the newline character from the input.
            // Concatenate the second string to the first string.
            strcat(string1, string2);
            printf("Concatenated string is: '%s'\n", string1);
        }
    } while (strcmp(string1, "q") != 0); // Repeat the loop until the first string is "q".
    printf("*** End of Concatenating Strings Demo ***\n");
}
