#include<stdio.h>

int frequency_character(char c, char *str){
    int i=0;
    int ce=0;
    while(str[i]){
        if(str[i]==c){
            ce++;
        }
        i++;      

    }
    return ce;
}
int main(){
    int z; 
    z=frequency_character('l', "Hello world!");
    printf("%d",z);
}
