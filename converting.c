#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting(void)
{
    printf("*** Start of Converting Strings to int Demo ***\n");
    // Declare a buffer to store the user's input and a variable for the converted integer
    char intString[BUFFER_SIZE];
    int intNumber;
    // Loop to repeatedly prompt the user for input until "q" is entered
    do
    {
        printf("Type an int numeric string (q - to quit):\n");
        // Read the input string from the user
        fgets(intString, BUFFER_SIZE, stdin);
        // Replace the newline character '\n' at the end of the input string with the null terminator '\0'
        // to ensure proper string handling. This is necessary because fgets() includes the newline
        // character in the input unless the buffer is full.
        intString[strlen(intString) - 1] = '\0';
        if (strcmp(intString, "q") != 0)
        {
            // Convert the numeric string to an integer using atoi library
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0); // Repeat until "q" is entered
    printf("*** End of Converting Strings to int Demo ***\n");
}