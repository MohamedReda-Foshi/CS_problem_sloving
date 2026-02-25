#include <stdio.h>

void pascalstriangle(int n){   
int i=0;
int j;
char s[i];
int last;

printf("1");
while(i<n){
    while(last<n){
        j=0;

            last=sizeof(s)/sizeof(s[0]);
    
            s[0]=1;
            s[0+last]=s[0]+s[last];
            s[last]=1;
        }
        last++;
        }
i++;
}

int main(){
    pascalstriangle(5);
}