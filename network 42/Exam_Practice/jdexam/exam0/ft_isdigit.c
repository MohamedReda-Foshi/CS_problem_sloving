#include <stdio.h>
int ft_isdigit(int c){
    
    if( c>=49 && c<=57){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    printf("%d\n",ft_isdigit('6'));
    printf("%d\n",ft_isdigit('a'));
 

}