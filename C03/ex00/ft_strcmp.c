#include <unistd.h>
//#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else
            return((int)*s1 - (int)*s2);
    }
    if(*s1 != '\0'|| *s2 != '\0')
        return((int)*s1 - (int)*s2);
    return (0);
}
/*
int main(void)
{
    char s1[] = "12348";
    char s2 [] = "1234";
    int x = ft_strcmp(s1,s2);
    printf("%d\n",x);
    return 0;
}*/