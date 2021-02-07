//5. Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character you want to check:\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("%c is a vowel.", ch);
        break;
    case 'e':
        printf("%c is a vowel.", ch);
        break;
    case 'i':
        printf("%c is a vowel.", ch);
        break;
    case 'o':
        printf("%c is a vowel.", ch);
        break;

    case 'u':
        printf("%c is a vowel.", ch);
        break;

    default:
        printf("%c is a consonant.", ch);
        break;
    }

    return 0;
}