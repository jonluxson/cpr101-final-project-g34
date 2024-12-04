#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting(void)
{
    // V1
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

    // V2
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doublestring[BUFFER_SIZE]; // Buffer to store user input
    double doubleNumber;            // Variable to store the converted double value
    do
    {
        printf("Type the double numeric string (q - to quit) : \n");
        fgets(doublestring, BUFFER_SIZE, stdin);       // Read input from the user and store it in the buffer
        doublestring[strlen(doublestring) - 1] = '\0'; // Remove the newline character at the end of the input string
        if ((strcmp(doublestring, "q") != 0))
        {

            doubleNumber = atof(doublestring); // Convert the string to a double
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doublestring, "q") != 0);
    printf("*** End of Converting Strings to double Demo ***\n\n");

    // V3
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE]; // Declare a character array to store the input string
    long longNumber;              // Declare a variable for the converted number
    do
    {
        printf("Type the long numeric string (q - to quit):\n");
        // Read the input string from the user
        fgets(longString, BUFFER_SIZE, stdin);
        // Remove the newline character at the end of the input string
        longString[strlen(longString) - 1] = '\0';
        // Check if the input string is not "q" (indicating the user wants to quit)
        if ((strcmp(longString, "q") != 0))
        {
            // Convert the string to a long integer using atol
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0);
    printf("*** End of Converting Strings to long Demo ***\n\n");
}