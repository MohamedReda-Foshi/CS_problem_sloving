#include <unistd.h>

void fun (int n){
    int i=1;
    int j=0;
    while(i<=n){
    
    j=0;    
        while(j<i){
            write(1,"*",1);
        j++;
    }
        write(1,"\n",1);
    i++;
    }
}

int main(){
    fun(5);
}