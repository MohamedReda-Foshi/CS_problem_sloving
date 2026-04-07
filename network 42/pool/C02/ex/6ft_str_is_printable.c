#include<stdio.h>

int ft_str_is_printable(char *str){
    
    int i=0;
    while (str[i])
    {
        if(!(str[i]>=32 && str[i]<= 126)){
            return  0;  
        }
        i++;
    }
    return 1;
}



int  main(){
   
    char str1[] = "HelloWorld123";
    char str2[] = "Hello\tWorld";     
    char str3[] = "Hello\nWorld";    
    char str4[] = "";                 

    printf("str1: %d\n", ft_str_is_printable(str1));
    printf("str2: %d\n", ft_str_is_printable(str2));
    printf("str3: %d\n", ft_str_is_printable(str3));
    printf("str4: %d\n", ft_str_is_printable(str4));
    
}