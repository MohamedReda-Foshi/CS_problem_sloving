#include<stdio.h>

void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void  ft_sort_int_tab(int *tab,int size){
    int i = 0;
    int j = 0;

    while(i<size){
        j=i+1;
        while(j<size){

            if(tab[i]>tab[j]){
                
                swap(&tab[i],&tab[j]);
            }
            j++;
        }
        i++;
    }
}

int main(){
    int j=0;
    int a[5]={10,2,32,99,5};
     ft_sort_int_tab(a,5);

    while(j<5){
        printf("%d ",a[j]);
        j++;
    }

}