#include <unistd.h>

int ft_toupper (int letter)
{
    if (letter > 'a' && letter <'z')
    {
       return (letter - 32);
    }
    return (letter);
}