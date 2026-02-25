#include <unistd.h>


int main(int argc,char **argv){
    if(argc == 2){
        int i;
        char c;
        
        i = 0;
        while (argv[1][i]){
            c = argv[1][i];
            if(c>='a' && c <='z'){
                if(c == 'z'){
                    c = 'a';
                }else
                    c = c + 1;
                
               
            }else if (c>='A' && c<='Z'){
                if(c == 'Z'){
                    c = 'A';
                }else
                    c = c + 1;
                
            }
            
            write(1,&c,1);
            i++;
        }
        write(1,"\n",1);
        
    }else{
        write(1,"\n",1);
    }
}