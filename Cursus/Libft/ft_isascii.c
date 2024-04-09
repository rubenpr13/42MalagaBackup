#include <unistd.h>

int ft_isascii (int val)
{
    if (val >= 0 && val <= 127)
    {
        return (1);
    }
    return (0);
}