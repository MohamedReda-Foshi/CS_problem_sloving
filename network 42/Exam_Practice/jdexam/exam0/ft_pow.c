#include<stdio.h>

int ft_pow(int num,int pow){

    if(num == 0 && pow<=0){
        return 1;
    }else if(num == 0 && pow>0){
        return 0;
    }else if(pow<0){
        return 0;
    }else{
        int res=1;
        while(pow!=0){
            res=num*res;
            pow--;
        }
        return res;

    }
    
    }

int main(){
    printf("%d\n",ft_pow(-2, 3));
    printf("%d\n",ft_pow(-2, 4) );
    printf("%d\n",ft_pow(5, -3));
    printf("%d\n",ft_pow(0, 3));
    printf("%d\n",ft_pow(0, 0));

    printf("%d\n",ft_pow(0, -2));

}
