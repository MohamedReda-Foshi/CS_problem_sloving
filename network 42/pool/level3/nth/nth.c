#include<unistd.h>

int main(int argc,char **argv){
    //"reda reda1" 1

    if(argc == 3){
        int n = argv[2][0]-'0';
        int i = 0;
        int c = 1;
        int j;
        while(argv[1][i]){
            if(n==1){
                while(argv[1][i]!=' '){
                    write(1,&argv[1][i],1);
                    i++;
                }
            }else{
                if(argv[1][i]==' '){
                c++;
                if(c == n){
                    j=i+1;
                    while(argv[1][j]!=' ' && argv[1][j]){
                        write(1,&argv[1][j],1);
                        j++;
                    }
                    write(1,"\n",1);
                    break;
                }
            }
            i++;   
        }
 
        }
        if(c<n){
            write(1,"\n",1);
        }

    }else{
        write(1,"\n",1);
    }
}
