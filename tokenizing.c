#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 // Define the maximum buffer size for input
#include "tokenizing.h"

void tokenizing(void)
{
    // V1
    printf("*** Start of Tokenizing Words Demo ***\n");
    // Declare a buffer to store input words and a pointer for tokenization
    char words[BUFFER_SIZE];
    char *nextWord = NULL;
    // Declare a counter to count words
    int wordsCounter;
    // Start a loop that continues until the user types "q"
    do
    {
        printf("Type a few words separated by space (q - to quit):\n");
        // Read a line of input from the user into 'words' buffer
        fgets(words, BUFFER_SIZE, stdin);
        // Remove the newline character added by fgets
        words[strlen(words) - 1] = '\0';
        if (strcmp(words, "q") != 0)
        {
            // Start tokenizing the input string using space as the delimiter
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            // Continue extracting words as long as there are more tokens
            while (nextWord)
            {
                // Print each word with its corresponding number
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                // Get the next word (token) from the remaining string
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0); // Exit the loop when user types "q"
    printf("*** End of Tokenizing Words Demo ***\n");

    // V2
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE]; // Define a buffer to store the input phrases
    char *nextPhrase = NULL;   // Define a pointer to hold each tokenized phrase
    int phrasesCounter;        // Variable to count the number of phrases
    do
    {
        printf("Type a few phrases separated by comma (q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);  // Read the input string into the buffer
        phrases[strlen(phrases) - 1] = '\0'; // Remove the trailing newline character added by fgets
        if (strcmp(phrases, "q") != 0)
        {
            nextPhrase = strtok(phrases, ","); // Tokenize the input string using a comma as the delimiter
            phrasesCounter = 1;                // Initialize the phrase counter
            while (nextPhrase)                 // Loop through each tokenized phrase
            {
                printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase); // Print the current phrase and its position
                nextPhrase = strtok(NULL, ",");                               // Get the next token
            }
        }
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n");
}
