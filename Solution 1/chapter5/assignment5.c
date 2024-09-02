#include <stdio.h>

// declarations
int getLen(char[]);
void reverseStr(char *, int);
int countChars(char *);

int main(int number, char *s[])
{
    char str[20];
    printf("Enter a string\n");
    gets(str);
    printf("You have input the string: %s\n", str);

    // 1.
    int len = getLen(str);
    printf("%d\n", len);

    // 2.
    reverseStr(str, len - 1);
    printf("Reversed String: %s\n", str);

    // 3.
    int numberOfChars = countChars(str);
    printf("Number of alphabets: %d\n", numberOfChars);

    return 1;
}

// definations
int getLen(char str[])
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

// as it is passed by reference no need to return new string
void reverseStr(char str[], int endIndex)
{
    for (int i = 0; i < endIndex; i++, endIndex--)
    {
        char temp = str[i];
        str[i] = str[endIndex];
        str[endIndex] = temp;
    }
}

int countChars(char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
        {
            count++;
        }

        s++;
    }

    return count;
}