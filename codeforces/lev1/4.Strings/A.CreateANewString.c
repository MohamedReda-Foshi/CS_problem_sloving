#include <unistd.h>
int i = 0;
int j = 0;

void punbr(int n){
    char c;
    
    if (n>9) {
        punbr(n / 10);
        punbr(n % 10);
    }else {
        c= n+'0';
        write(1,&c,1);
    }
    
}


int main(int argc,char **argv){
    
    if (argc==3){
        while (argv[1][i]) {
            write(1,&argv[1][i],1);
            i++;
        }
        write(1,"\n",1);
        punbr(i);
        write(1,"\n",1);
        while (argv[2][j]) {
            write(1,&argv[2][j],1);
            j++;
        }
        write(1,"\n",1);
        punbr(j);
        write(1,"\n",1);
        
        
    
    }else {
        write(1,"\n",1);
    }
}