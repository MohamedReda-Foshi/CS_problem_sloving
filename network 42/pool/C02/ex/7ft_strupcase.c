#include<stdio.h>

char *ft_strupcase(char *str){

    int i = 0;
    while (str[i])
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
            
        }
        i++;
    }
    return str;
}



int main(){

    char s[] = "redaAasA_a";
    printf("%s\n", ft_strupcase(s));
    return 0;
}