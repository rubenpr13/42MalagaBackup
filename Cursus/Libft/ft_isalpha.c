#include <unistd.h>

int ft_isalpha(int val)
{
    if (val >= 'a' && val <= 'z' || val >= 'A' && val <= 'Z')
    {
        return (val);
    }
    return (0);
}