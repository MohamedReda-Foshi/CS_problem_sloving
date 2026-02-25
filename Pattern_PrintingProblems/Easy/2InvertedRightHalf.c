#include <unistd.h>

int ft_atoi(char *c){
    int i=0;
    int r;
    while(c[i]){
        r=r*10+(c[i]+'0');
        i++;
    }
    return r;
    
}

void fun(int n){
    int i=n;
    int j;
    while(0<i){
        j=0;
        while(j<i){
            write(1,"*",1);
            j++;
        }
        write(1,"\n",1);
        i--;
    }
}
int main(int argc,char **argv){
    (void) argc;
    fun(ft_atoi(argv[1]));
    
}