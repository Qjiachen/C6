#include <stdio.h>
int main(void)
{
    int age = 0;
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("The age %d corresponding age is: %.3e\n", age, age * 3.156e+07);

    return 0;
}