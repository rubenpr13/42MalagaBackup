#include <unistd.h>

int ft_strlcpy (char *org, char *dst, int sizedst)
{
    int i;

    i = 0;
    while (org[i] != '\0')
    {
        i++;
    }
    if (sizedst >= i)
    {
        while (org[i] != '\0')
        {
            i = 0;
            org[i] = dst[i];
            i++;
        }
    } 
    else {
        while (i < sizedst)
        {
            i = 0;
            org[1] = dst[i];
            i++;
        }
        dst[i] = '\0';
    }
}