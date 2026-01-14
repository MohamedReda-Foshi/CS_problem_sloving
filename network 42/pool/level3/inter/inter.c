#include<unistd.h>

int main(int argc,char **argv){
    int i =0;
    int j =0;
    int k;

    if(argc==3){
        
        while(argv[1][i] && argv[2][j]){
            if(argv[1][i]==argv[2][j]){
                k=0;
                while(argv[1][k]!=argv[1][i]){
                    write(1,&argv[1][i],1);
                    k++;
                }
                i++;
            }
            j++;
        }
        write(1,"\n",1);
    }else{
        write(1,"\n",1);
    }
}