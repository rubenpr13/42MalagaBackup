#include <unistd.h>

int ft_isalnum (int val)
{
    if (val >= '0' && val <= '9')
    {
        return (1);
    }
    if ((val >= 'a' && val <= 'z') || (val >= 'A' && val >= 'Z'))
    {
        return (1);
    }
    return (0);
}