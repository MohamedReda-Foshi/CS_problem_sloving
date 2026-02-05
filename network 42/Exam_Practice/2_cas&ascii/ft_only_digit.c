#include <stdio.h>

int ft_only_digit(char *str){
    int i;
    
    i = 0;
    
    while(str[i]){
        if(!(str[i]>='0' && str[i]<='9')){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char str[] ="1234a5";
    printf("%d", ft_only_digit(str));
    return 0;
}