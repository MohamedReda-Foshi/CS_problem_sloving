#include<stdio.h>

void watermelon(int n){

    if(n>2 && n%2==0){
      printf("YES");
    }else{
      printf("NO");
    }
  }

int main(){
  int n;

  scanf("%d",&n);
  watermelon(n);
}
