#include<stdio.h>

char *ft_strncpy(char *dest,char *src , unsigned int n){
    unsigned int i=0;

    while (i<n &&src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }

    dest[i]='\0';

    return dest;
    
}

int main(){
    char s[7];

    ft_strncpy(s,"jaouad",7);

    printf("%s",s);

}



