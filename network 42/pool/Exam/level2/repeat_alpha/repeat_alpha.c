#include <unistd.h>


int main(int argc,char **argv){
    if(argc==2){
        int i = 0;
        while(argv[1][i]){
        char c=argv[1][i];
            
        if(c>='a'&& c<='z'){
            int j=c-97;
            while(j>=0){
                write(1,&c,1);
                j--;
            }
        }

         if(c>='A'&& c<='Z'){
            int j=c-65;
            while(j>=0){
                write(1,&c,1);
                j--;
            }
        }
        i++;
        }
        write(1,"\n",1);
    }else{
         write(1,"\n",1);
    }
}
