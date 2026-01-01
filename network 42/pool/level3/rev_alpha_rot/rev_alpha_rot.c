#include <unistd.h>

int main(int argc,char **argv){
    if(argc==2){
        int i=0;
        while(argv[1][i]){
            char c=argv[1][i];
            if(c>='a' && c<='z'){
                c='a'+'z'-c;
               
                if(c>='a'&& c<'m'){
                    c=c+13;
                }else if(c>='n'&& c<='z'){
                    c=c-13;
                }
            }else if(c>='A' && c<='Z'){
                //rot 13
                if(c>='A'&& c<'M'){
                    c=c+13;
                }else if(c>='N'&& c<='Z'){
                    c=c-13;
                }
                c='A'+'Z'-c;
            }
            write(1,&c,1);
            i++;
        }
        write(1,"\n",1);
    }
    else{
        write(1,"\n",1);
    }
}