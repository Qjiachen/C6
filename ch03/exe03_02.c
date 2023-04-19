#include <stdio.h>

int main(void)
{
    int ch;
    printf("Please enter a ASCII code:\n");
    scanf("%d", &ch);
    printf("The ASCII code %d is: %c\n", ch, ch);

    return 0;
}