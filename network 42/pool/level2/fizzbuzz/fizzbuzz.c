#include<unistd.h>

void putnbr (int c){

  char k;

  if(c>9){
    putnbr(c/10);
    putnbr(c%10);
  }else{
    k='0'+c;
     write(1,&k,1);
  }
  

}


int main(){
  int i=1;

  while(i<=100){
    if(i%5==0 && i%3==0){
       write(1,"fizzbuzz",8);
    }
    else if(i%3==0){
      write(1,"fizz",4);
    } 
    else if(i%5==0){
    write(1,"buzz",4);
    }else{
      putnbr(i);
    }
    write(1,"\n",1);
    i++;

  }
}
