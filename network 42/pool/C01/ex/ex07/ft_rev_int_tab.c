#include<stdio.h>

void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void ft_rev_int_tab(int *tab,int size){
    int i=0;
    int j=size-1;
    tab[i];
    while(i<size/2){
        swap(&tab[i],&tab[j]);
        i++;
        j--;
    }
}

int main(){
    int j=0;
    int a[5]={1,2,3,4,5};
    ft_rev_int_tab(a,5);

    while(j<5){
        printf("%d ",a[j]);
        j++;
    }

}