#include <stdio.h>

int ft_has_digit(char *str){
int i;

i = 0;
while(str[i]){
        if(!(str[i]>='0' && str[i]<='9'))
                return 1;
        i++;
}
return 0;
}

int main(){
    char str[] ="123";
    printf("%d", ft_has_digit(str));
    return 0;
}
