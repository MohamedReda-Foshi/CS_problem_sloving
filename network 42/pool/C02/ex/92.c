#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    
    i = 0;
    while(str[i]){
        if(i == 0 && (str[0]>='a' && str[0]<='z')){
            str[0]=str[0]-32;
        }

        if(!((str[i]>='a' && str[i]<='z')||
            (str[i]>='A' && str[i]<='Z')||
            (str[i]>='0' && str[i]<='9'))
        ){
            if(str[i+1]>='a' && str[i+1]<='z'){
                str[i+1]=str[i+1]-32;
            }
        }else if (str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;

        }
        i++;
    }
    return str;
}

int main(void)
{
    char s[] = "salut, coMMent tA vas ? 42mOts quar2aNte-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(s));
    return 0;
}