#include<stdio.h>
int rectangle_area(int length, int width){
    return length * width;
}

int main(){
    printf("%d \n",rectangle_area(1,3));
    printf("%d \n",rectangle_area(2,5));
}

