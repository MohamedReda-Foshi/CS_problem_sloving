#include<unistd.h>
void ft_remove_non_alpha(char *str){
    int i=0;
    
    while(str[i]){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(){
    char str[] ="HELLO WORLd 123";
    ft_remove_non_alpha(str);
    return 0;
}