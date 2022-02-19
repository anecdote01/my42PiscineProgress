#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1,str++,1);
    }
}
/*
int main(void)
{
    ft_putstr("burak yildirim");
    return 0;
}*/