#include <stdlib.h>
#include <stdio.h>

int len(char *c){
    int i=0;
    while (c[i]!='\0'){
        i++;
    }
    return i;    
}

char *ft_strdup(char *src){
    char *ptr1;
    char *ptr2;
    char *res;
    
    res=(char*)malloc(sizeof(len(src)));
    
    ptr1=src;
    ptr2=res;
    
    while(*ptr1!='\0'){
        
        *ptr2++=*ptr1++;
        
        //ptr1++;
        //ptr2++;
        
    }
    *ptr2='\0';
    free(res);
    return res;
}  

int main(){
    char ch[7];
    printf("donne voter chanine: ");
    scanf("%s",ch);
    
    printf("%s",ft_strdup(ch));
}