#include<unistd.h>

void ft_rot13(char *str){
    int i ;
    char c;

    i = 0;
    c = str[i];

    while(str[i])
    {
        c = str[i];
        if((c>='a' && c<='m')||(c>='A' && c<='M')){
            c = c + 13;
        }else if((c>='n' && c<='z')||(c>='N' && c<='Z')){
            c=c-13;
        }
        write(1,&c,1);
        i++;
    }
}
int main(){

    ft_rot13("My horse is Amazing.");
} 