#include <unistd.h>

void ft_str_tolower(char *str){
    int i=0;
    
    while(str[i]){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i] + 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}


int main(){
    char str[] ="HELLO WORLd 123";
    ft_str_tolower(str);
    return 0;
}
