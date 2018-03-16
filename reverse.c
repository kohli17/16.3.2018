#include <stdio.h>
#include <string.h>


int main()
{
    char str[MAX_SIZE];


    printf("Enter any string: ");
    gets(str);

    printf("Original string = %s\n", str);
    strrev(str)

    printf("Reverse string = %s", str);

    return 0;
}
