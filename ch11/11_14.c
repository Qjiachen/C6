/* put1.c —— 打印字符串， 不添加\n */
#include <stdio.h>
//由于11_16.c源代码调用
void put1(const char * string)
{
    while (*string != '\0')
        putchar(*string++);    
        //1.先指针自增（延迟实现）2.解引用 （即++优先级更高）
        //（由于是后缀，先打印内容后自增）
}