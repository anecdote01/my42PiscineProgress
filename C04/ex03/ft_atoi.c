#include <unistd.h>
#include <stdio.h>
int    ft_char_to_int(char *p, int i,int sign)
{
    int x;
    int decimal;
    int y = 0;

    x = 0;
    while(i > 0)
    {
        decimal = 1;
        y = i--;
        while (y-- > 1)
            decimal *= 10;
        x += (int)(*p++ - '0')*decimal;
    }
    if (sign%2 )
        x *= -1;
    return x;
}

int ft_atoi(char *str)
{
    int i;
    int sign;

    sign = 0;
    i = 0;
    while (*str != '\0')
    {
        if(*str == '-')
            sign++;
        while (*str <= '9' && *str >= '0')
        {
            i++;
            str++;
        }
        str -= i;
        if (i != 0)
            return (ft_char_to_int(str,i,sign));
        str++;
    }
    return (0);
}
/*
int main(void)
{
    printf("%d\n",ft_atoi("  ---+--+3236414562ab567"));
    return 0;
}
integer ın alamadığı sayılarda sapıtıyor..*/