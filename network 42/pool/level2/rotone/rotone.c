#include<unistd.h>
#include<stdio.h>


int main(int argc,char **argv){
    if(argc==2){
        int i=0;
        while(argv[1][i]){

            char c=argv[1][i];

            if(('a'<=c && 'y'>=c) ||( 'A'<=c && 'Y'>=c)){
                c=c+1;
            }else if(c=='z' || c=='Z'){
                c=c-25;
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