#include <stdio.h>

int ft_count_lower(char *str)
{
    int i;
    int cont;
    char c;
    
    i = 0;
    while(str[i])
    {
        c = str[i];
        if(c >= 'a' && 'z' >= c)
        {
            cont++;
        }    
        i++;
    }
    return cont;
}


int main(){
    printf("%d", ft_count_lower("REDA atest"));
}