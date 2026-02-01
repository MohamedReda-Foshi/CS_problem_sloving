#include <unistd.h>

void ft_toupper(char *str){
    int i;
    char c;
    
    i = 0;
    while(str[i])
    {
        c = str[i];
        if(c >= 'a' && 'z' >= c){
            c = c-32;
        }
        write(1,&c,1);
        i++;
    }


}


int main(){
    ft_toupper("test");
}