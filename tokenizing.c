#define BUFFER_SIZE 128
#define _CRT_SECURE_NO_WARNINGS
// MANIPULATING HEADER
#include "manipulating.h"

/**
 * Concatenates two strings entered by the user via standard input.
 * Compares two strings provided by the user via standard input.
 */
#include "manipulating.h"

void manipulating(void) {
    ///* Version 1 */
    //printf("*** Welcome to the Concatenating Strings Demo ***\n");

    //char string1[BUFFER_SIZE];
    //char string2[BUFFER_SIZE];

    //do {
    //    printf("Enter the 1st string (type 'q' to quit): \n");
    //    fgets(string1, BUFFER_SIZE, stdin); // Accept characters from the user and store them in string1

    //    string1[strlen(string1) - 1] = '\0'; // Append the null character to mark the end of the string

    //    if ((strcmp(string1, "q") != 0)) {
    //        printf("Enter the 2nd string: \n");
    //        fgets(string2, BUFFER_SIZE, stdin); // Accept characters from the user and store them in string2

    //        string2[strlen(string2) - 1] = '\0'; // Append the null character to mark the end of the string

    //        strcat(string1, string2); // Concatenate string1 and string2, and store the result in string1
    //        printf("Concatenated string is \'%s\'\n", string1);
    //    }
    //} while (strcmp(string1, "q") != 0);

    //printf("*** End of Concatenating Strings Demo ***\n\n");

/* Version 2 */
printf("*** Start of Comparing Strings Demo ***\n");

    char compare1[BUFFER_SIZE];  // First string to compare
    char compare2[BUFFER_SIZE];  // Second string to compare
    int result;                  // Variable to store comparison result

    do {
        printf("Type the 1st string to compare (q - to quit): \n");
        gets(compare1, BUFFER_SIZE);
        compare1[strlen(compare1) - 1] = '\0';  // Remove the newline character

        if (strcmp(compare1, "q") != 0) {
            printf("Type the 2nd string to compare: \n");
            gets(compare2, BUFFER_SIZE);
            compare2[strlen(compare2) - 1] = '\0';  // Remove the newline character

            result = strcmp(compare1, compare2);

            if (result < 0) {
                printf("'%s' string is less than '%s'\n", compare1, compare2);
            } else if (result == 0) {
                printf("'%s' string is equal to '%s'\n", compare1, compare2);
            } else {
                printf("'%s' string is greater than '%s'\n", compare1, compare2);
            }
        }
    } while (strcmp(compare1, "q") != 0);

    printf("*** End of Comparing Strings Demo ***\n\n");

    return 0;
}






