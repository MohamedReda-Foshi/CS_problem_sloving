#include<unistd.h>

void putnbr(int c){
    char k;
    if(c>9){
        putnbr(c/10);
        putnbr(c%10);
    }else{
        k=c+'0';
        write(1,&k,1);
    }
}
int ft_atoi(char *s){
    int i=0;
    int n=0;
    while(s[i]>='0'&& s[i]<='9'){
        n=n*10+(s[i]-'0');
        i++;
    }
    return n;
}
int main(int argc,char **argv){
    int i;
    
    
    if(argc != 2){
    write(1,"\n",1);
    return 0;
    }


    int n=ft_atoi(argv[1]);
        i = 1;
            while(i<=9)
            {
                putnbr(i);
                write(1," x ",3);
                putnbr(n);
                write(1," = ",3);   
                putnbr(i*n);    
                write(1,"\n",1);
                i++;
            }
        
    }
