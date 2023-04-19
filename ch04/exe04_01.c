#include <stdio.h>
int main(void)
{
    char name[40], surname[40];
    printf("enter your name and surname: ");
    scanf("%s %s", name, surname);
    printf("Your name is: %s,%s\n", name, surname);

    return 0;
}