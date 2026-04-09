#include <unistd.h>

void ft_print_numbers(void){
    int i;
    //char c;

    i = '0';
    while(i<='9')
    {
        //c=(char)i;
        write(1,&i,1);
        i++;
    }
}

int main(){
    ft_print_numbers();
}
