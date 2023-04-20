#include <stdio.h>
//和11_14.c 11_15.c 多文件编译
void put1(const char * string);
int put2(const char * string);

int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend,\n");
    printf("I could %d characters.\n",
        put2("I never would cry old chairs to mend."));

    return 0;
}