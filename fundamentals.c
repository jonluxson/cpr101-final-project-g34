#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80    // Define maximum buffer size for input string
#define NUM_INPUT_SIZE 10 // Define maximum size for numeric input (position)
#include "fundamentals.h"

void fundamentals(void)
{
    // V1
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];     // Buffer to store the user input string
    char numInput[NUM_INPUT_SIZE]; // Buffer to store the user input for position
    size_t position;               // Variable to store the position of character in string
    // Start of the main loop that continues until the user types "q" to quit
    do
    {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);  // Read user input into buffer1
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove the newline character added by fgets

        if (strcmp(buffer1, "q") != 0)
        {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin); // Read user input for position
            numInput[strlen(numInput) - 1] = '\0';  // Remove newline character from numInput
            // Convert string input to integer and store in 'position'
            position = atoi(numInput);
            // Ensure the position does not exceed the length of the string
            if (position >= strlen(buffer1))
            {
                position = strlen(buffer1) - 1;                            // Set position to the last valid index
                printf("Too big... Position reduced to max. available\n"); // Notify user of adjustment
            }
            printf("The character found at %d position is '%c'\n",
                   (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0); // Continue the loop if the user hasn't typed "q"
    printf("*** End of Indexing Strings Demo ***\n");

    // V2
    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE]; // Define a buffer array to store user input
    do
    {
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);  // Read the input string from stdin and store it in the buffer
        buffer2[strlen(buffer2) - 1] = '\0'; // Remove the trailing newline character added by fgets
        if (strcmp(buffer2, "q") != 0)
        {
            printf("The length of \"%s\" is %d characters\n",
                   buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "q") != 0);
    printf("*** End of Measuring Strings Demo ***\n");

    // V3
    printf("*** Start of Copying Strings Demo ***\n");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];
    do
    {
        destination[0] = '\0'; // Reset the destination string to empty
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin); // Get the source string from user input
        source[strlen(source) - 1] = '\0'; // Remove the newline character from the input
        if (strcmp(source, "q") != 0)      // Check if the input is not "q"
        {
            strcpy(destination, source); // Copy the source string to the destination
            printf("New destination string is \'%s\'\n", destination);
        }
    } while (strcmp(source, "q") != 0); // Repeat until the user enters "q"
    printf("*** End of Copying Strings Demo ***\n\n");
}