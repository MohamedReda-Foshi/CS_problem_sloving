#include<stdio.h>
char *ft_strcpy(char *s1,char *s2){
    int i;
    
    i = 0;
    while(s2[i]){

        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}


int main(){
    char a[]="reda";
    char b[]="foshi";
    printf("a:%s\n",a);
    printf("b:%s\n",b);
    printf("after\n");
    ft_strcpy(a,b);
    printf("a:%s\n",a);
  
}