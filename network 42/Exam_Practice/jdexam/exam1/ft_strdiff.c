#include <stdio.h>

int ft_strdiff(const char *s1, const char *s2)
{
     int i = 0;
     
     while(s1[i]||s2[i])
     {    
         if(s1[i] != s2[i])
            return i;
         i++;
     }
     return -1;
}

int main(void){
    printf("%d\n", ft_strdiff("hello", "hella"));
       return 0;
    
}