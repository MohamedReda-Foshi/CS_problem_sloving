#include<stdio.h>
int ft_abs(int n){
    if(n<=0){
        return n*-1;
    }
    return n;
}

int main(){
printf("%d\n",ft_abs(-42));
printf("%d\n",ft_abs(0));
printf("%d\n",ft_abs(-99));

 

}