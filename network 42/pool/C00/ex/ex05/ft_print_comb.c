#include<unistd.h> 

void ft_print_comb(void){
char arr[6];

arr[0]='0'-1;
arr[4]=',';
arr[5]=' ';
//789

while(++arr[0]<='6'){
    arr[1]=arr[0];
    while(++arr[1]<='7'){
        arr[2]=arr[1];
        while(++arr[2]<='8'){
            arr[3]=arr[2];
            while(++arr[3]<='9'){
                write(1,arr,5);
            }
        }
    }
}
//write(1,"6789",4);

}

int main(){
    ft_print_comb();
}