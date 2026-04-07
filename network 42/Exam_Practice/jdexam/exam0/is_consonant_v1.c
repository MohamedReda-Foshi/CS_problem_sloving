#include<stdio.h>

int is_consonant_v1(char c){
    if(
        c=='a'|| 
        c=='e' ||
         c=='o'|| 
         c=='i'|| 
         c=='u'|| 
         c=='A'|| 
         c=='O'|| 
         c=='E'||
         c =='I'|| 
         c=='U'
    ){
        return 0;
    }else{
        return 1;

    }
}

int main(){
    printf("%d\n",is_consonant_v1('b'));
    printf("%d\n",is_consonant_v1('e'));
    printf("%d \n",is_consonant_v1('o'));
    printf("%d \n",is_consonant_v1('C'));
    printf("%d \n",is_consonant_v1('.'));
    printf("%d \n",is_consonant_v1(65));

}