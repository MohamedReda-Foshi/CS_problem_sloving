#include<unistd.h>


int cont(char a[]){
   int j=0;
  while(a[j]){
    j++;
  }
  return j;
}

int main(int argc,char **argv){
    if(argc == 4 ){

        int a=cont(argv[2]);
        int b=cont(argv[3]);
        
        if(a==1 && b==1){

            int i;    
            i=0;
            while(argv[1][i]){
                if(argv[1][i]==argv[2][0]){
                    argv[1][i]=argv[3][0];
                }
                write(1,&argv[1][i],1);
                i++;
            }        
           write(1,"\n",1);    
        }
        }
}
