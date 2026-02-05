
#include <stdio.h>

int ft_only_alpha(char *str){
    int i;
   
    i = 0;

    
    while(str[i])
    {
        if(!((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')))
        {
            return 0;
        }
        i++;
    }
        return 1;
}

int main(){
    char str[] = "H1elloWord";
    printf("%d", ft_only_alpha(str));
    return 0;
}