#include<unistd.h>

int main(int argc,char **argv){
    if(argc==2){
        int i;
        int j;

        i = 0;
        //connter
        while(argv[1][i]){
            i++;
        }
        
        j = i - 1;

     // space con
        while(argv[1][j] == ' '|| argv[1][j] == '\t')
        {
            j--;
        }
        
        while(argv[1][j] != ' ' && argv[1][j] != '\t')
        {
            j--;
        }

        j++;

        while(argv[1][j])
        {
            write(1,&argv[1][j],1);
            j++;
        }
        write(1,"\n",1);
    }else{
        write(1,"\n",1);
    }
    
}
