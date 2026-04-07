#include <stdio.h>
char next_character_v1(char c){
    return c+1;
}

int main(){
    printf("%c",next_character_v1('A'));
}