#include <stdio.h>

/**
 * 计算字符串长度
 */
size_t strlen(const char *str)
{
    if (str == NULL)
    {
        return 0;
    }

    int length;

    while (*str != '\0')
    {
        length++;
        str++; // 指针后移
    }

    return length;
}

/**
 * 字符串拼接
 */
char *strcat(char *dest, const char *src)
{
    if (dest == NULL || src == NULL)
    {
        return NULL;
    }

    char *origin = dest;

    while (*dest != '\0')
    {
        dest++; // 将指针指向末尾
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return origin;
}

/**
 * 字符串复制
 */
char *strcpy(char *dest, const char *src)
{
    if (dest == NULL || src == NULL)
    {
        return NULL;
    }

    char *origin = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return origin;
}

/**
 * 字符串比较
 */
int strcmp(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
    {
        if (s1 == s2)
        {
            return 0;
        }
        else if (s1 == NULL)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }

    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main()
{

    /// strcmp
    // const char *str1 = "Huawei";
    // const char *str2 = "Huawei";
    // int res = strcmp(str1, str2);
    // printf("%d", res);

    /// strcpy
    // char dest[100] = "iknow";
    // char *res = strcpy(dest, "ursmilekillmyheart");
    // printf("%s\n", dest);

    /// strcat
    // char dest[100] = "iknow";
    // char *res = strcat(dest, "uknow");
    // printf("%s\n", res);

    /// strlen
    const char str[] = "HelloWorld";
    size_t len = strlen(str);
    printf("%zu\n", len);

    return 0;
}
