#include <unistd.h>
//#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int i = 0;
    while (dest[i] != '\0')
        i++;
    while (*src != '\0')
    {
        dest[i] = *src;
        src++;
        i++;
    }
    dest[i] = '\0';
    return(dest);    
}
/*
int main(void)
{
    char dest[] = "mehmet";
    char src[] = " babba";
    printf("%s\n",ft_strcat(dest,src));
    return(0);
}*/