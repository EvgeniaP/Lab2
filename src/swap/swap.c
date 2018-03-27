#include "swap.h"

void Swap(char *left, char *right)
{
    char center;
    center = *right;
    *right = *left;
    *left = center;
}
