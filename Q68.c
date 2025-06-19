// Check if a String is Palindrome Using Pointers
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end)
    {
        // Skip non-alphanumeric characters and ignore case
        while (start < end && !isalnum(*start))
            start++;
        while (start < end && !isalnum(*end))
            end--;

        if (tolower(*start) != tolower(*end))
            return 0;

        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than scanf

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
