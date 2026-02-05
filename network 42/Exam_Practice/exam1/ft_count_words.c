#include<stdio.h>

int ft_count_words(char *str){
    int i=0;
    int count=0;
    
    while(str[i]){
        if(str[i]==' '||str[i]=='\t'||str[i]=='\n'){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char str[] =" HELLO WORLd 123";
    ft_count_words(str);
    printf("%d", ft_count_words(str));
    return 0;
}
