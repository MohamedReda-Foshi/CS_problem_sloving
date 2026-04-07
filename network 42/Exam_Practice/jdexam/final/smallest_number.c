#include "stdio.h"
int smallest_number(int n1, int n2, int n3){
    if(n1 > n2){    
        if(n2>n3){
            return n3;
        }
        return n2;
    }else {
        if(n1<n3){
            return n1;
        }else {
            return n3;
        }
    }
    
}

int main(){
    printf("%d",smallest_number(2,1,0));
}