#include <stdio.h>

size_t strlen(const char *str)
{
    int length;
    while (*str != '\0')
    {
        length++;
        str++; // 指针后移
    }

    return length;
}

int main()
{
    const char str[] = "HelloWorld";

    size_t len = strlen(str);

    printf("%zu\n", len);

    return 0;
}
