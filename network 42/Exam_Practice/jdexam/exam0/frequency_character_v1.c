#include<stdio.h>
int frequency_character(char c, char *str){
    int i=0;
    int count=0;
    while(str[i]){
        if(str[i]==c){
            count++;
        }
        i++;
    }
    return count;
}
int main(){

    printf("%d",frequency_character('l', "Hello world!"));
}