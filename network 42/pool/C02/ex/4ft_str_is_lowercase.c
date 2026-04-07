#include<stdio.h>

int  ft_str_is_lowercase(char *str){
    int i;
    int count;


    i = 0;
    count =0;
    
    while (str[i])
    {
        if(str[i]>='a' && str[i]<='z'){
            count++;
        }
        i++;    
    }
return count;   
}


int main(){

    printf("%d",ft_str_is_lowercase("123redaWAWDWawds"));

}


