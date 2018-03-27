#include "revert_string.h"

void Swap(char *left, char *right)
{
    char center;
    center = *right;
    *right = *left;
    *left = center;
}

void RevertString(char *str)
{
    int end_str = strlen(str) -1, start_str = 0;
    while (start_str<end_str)
    {
        Swap(&str[start_str], &str[end_str]);
        end_str--;
        start_str++;
    }
}