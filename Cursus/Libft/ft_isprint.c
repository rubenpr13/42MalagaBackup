#include <unistd.h>

int ft_isprint (int val)
{
    if (val >= 32 && val <= 126)
    {
        return (1);
    }
    return (0);
}