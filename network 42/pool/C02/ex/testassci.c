#include<unistd.h>

int main(){

    char c='!';
    while (c<=126 )
    {
        
        write(1,&c,1);
        c++;
    }
    

}