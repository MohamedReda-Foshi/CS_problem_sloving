#include<stdio.h>

void watermelon(int n){
  if(n>=1 && n<=100){
    if(n%2==0){
      printf("YES");
    }else{
      printf("NO");
    }
  }else{
    printf("the number should be bettwen 1 and 100");
  }
}

int main(){
  int n;

  printf("enter number: ");
  scanf("%d",&n);
  watermelon(n);
}

