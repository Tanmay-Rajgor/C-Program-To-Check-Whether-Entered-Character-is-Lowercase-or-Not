#include<stdio.h>

int main()
{
    // 97-122 = a-z
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122)
    {
        printf("%c is lowercase character.\n", ch);
    }
    else
    {
        printf("%c is uppercase character.\n", ch);
    }

    return 0;
}