#include<stdio.h>

int  ft_str_is_numeric(char *str){
    int i;
    int count;


    i = 0;
    count =0;
    
    while (str[i])
    {
        if(str[i]>='0' && str[i]<='9'){
            count++;
        }
        i++;    
    }
return count;   
}


int main(){

    printf("%d",ft_str_is_numeric("123reda"));

}


