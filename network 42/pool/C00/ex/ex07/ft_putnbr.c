#include<unistd.h>

void    ft_putnbr(int nb)
{
    char c;
    if(nb==-2147483648){
        write(1,"-2147483648",11);
    }
    if(nb>9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }if(nb<9 && nb>=0)
    {
        c = nb + '0';
        write(1,&c,1);
    }
}


int main(){
    ft_putnbr(43);
}