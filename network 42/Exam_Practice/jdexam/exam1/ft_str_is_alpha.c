#include <stdio.h>
int ft_str_is_alpha(char *str){
    int i=0;
    int c=0;
    
    while (str[i]) {
        if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
            c++;
        }
        i++;
    }
    if(c==i){
        return 1;
    }else {
        return 0;
    }
    
    
}
int main(){
    
printf("%d",ft_str_is_alpha("reda"));
}