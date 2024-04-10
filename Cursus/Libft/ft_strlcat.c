#include <unistd.h>

int ft_strlcat (char *dst, char *org, int sizedst)
{
 unsigned int i;

 i = 0;
 while (dst[i] != '\0')
 {
    i++;
 }
 if (i <= sizedst)
 {
    i = 0;
    while (dst[i] != '\0')
    {
        org[i] = dst[i];
        i++;
    }
    dst[i] = '\0';
 }
 else
 {
    i = 0;
    while (i <= (sizedst - 1))
    {
        org[i] = dst[i];
        i++;
    }
    dst[i] = '\0';
 }
}