#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 // Defines the size of the input buffers for strings.
#include "manipulating.h"

void manipulating(void)
{
    // V1
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

    // V2
    printf("*** Start of Comparing Strings Demo ***\n");
    // Define two buffers to store the strings to compare
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result; // Variable to store the comparison result
    do
    {
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);   // Read the first string from stdin and store it in compare1
        compare1[strlen(compare1) - 1] = '\0'; // Remove the trailing newline character from the first string
        // Check if the input is not "q"
        if (strcmp(compare1, "q") != 0)
        {
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin);   // Read the second string from stdin and store it in compare2
            compare2[strlen(compare2) - 1] = '\0'; // Remove the trailing newline character from the second string
            result = strcmp(compare1, compare2);   // Compare the two strings and store the result
            // Determine the relationship between the two strings
            if (result < 0) // first non-matching character in compare1 is greater (in ASCII) than that of compare2
                printf("\"%s\" string is less than \"%s\"\n", compare1, compare2);
            else if (result == 0) // if strings are equal
                printf("\"%s\" string is equal to \"%s\"\n", compare1, compare2);
            else // first non-matching character in compare1 is lower (in ASCII) than that of compare2
                printf("\"%s\" string is greater than \"%s\"\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0);
    printf("*** End of Comparing Strings Demo ***\n");

    // V3
    printf("*** Start of Searching Strings Demo ***\n");
    // Declare a buffer for the main string (haystack) and the substring (needle)
    char haystack[BUFFER_SIZE];
    char needle[BUFFER_SIZE];
    // Pointer to store the location of the substring (needle) in the main string (haystack)
    char *occurrence = NULL;
    do
    {
        printf("Type the string (q - to quit):\n");
        // Read the input string into 'haystack'
        fgets(haystack, BUFFER_SIZE, stdin);
        // Remove the trailing newline character added by fgets
        haystack[strlen(haystack) - 1] = '\0';
        // Check if the user entered "q" to quit
        if (strcmp(haystack, "q") != 0)
        {
            printf("Type the substring:\n");
            // Read the input substring into 'needle'
            fgets(needle, BUFFER_SIZE, stdin);
            // Remove the trailing newline character added by fgets
            needle[strlen(needle) - 1] = '\0';
            // Use strstr to find the first occurrence of the substring in the main string
            occurrence = strstr(haystack, needle);
            // Check if the substring was found
            if (occurrence)
            {
                // Calculate the position of the substring and print it
                printf("'%s' found at %d position\n", needle,
                       (int)(occurrence - haystack));
            }
            else
            {
                printf("Not found\n");
            }
        }
    } while (strcmp(haystack, "q") != 0); // Repeat until the user enters "q" to quit
    printf("*** End of Searching Strings Demo ***\n\n");
}
