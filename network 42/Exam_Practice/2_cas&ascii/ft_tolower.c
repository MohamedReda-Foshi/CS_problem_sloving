#include<unistd.h>
void ft_tolower(char *str){
    int i;
    char c;
    
    i = 0;
    
    while(str[i])
    {
         c = str[i];
        
         if( c>= 'A' && c<= 'Z')
         {
            c = c + 32;
            write(1,&c,1);
         }
         i++;
    }
}

int main()
{
    ft_tolower("REDA");
}