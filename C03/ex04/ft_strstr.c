#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int x;

    x = 0;
    i = 0;
    while(str[i] != '\0')
    {
        while(to_find[x] == str[i])
        {
            x++;i++;
            if(to_find[x] == '\0')
                return(str += i-x);
        }
        x = 0;
        i++;
    }
    return(str += i);
}
/*
int main(void)
{
    char str[] = "burak yildirim.";
    char to_find[] = "yil";
    printf("%s\n",ft_strstr(str,to_find));
    printf("%s\n",strstr(str,to_find));
    return 0;
}*/