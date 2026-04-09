 #include <unistd.h>

int leng(char *arr){
    int x=0;
    while (arr[x]) {

        x++;
    }
    return x;
}

void print(char *arr){
    int z=0;
    while (arr[z]) {
        write(1,&arr[z],1);

        z++;
    }
    
}

int main(int argc,char **argv){
    int i = 0;
    int j = 0;
    int l1=leng(argv[1]);
    int l2=leng(argv[2]);
    int bol;

    if(argc==3){
        while (argv[1][i] && argv[2][j]){
            if(
                (argv[1][i]>argv[2][j])
                &&
                (l1==l2)
            ){
                bol=1;
                break;

            }else if(
                (argv[1][i]<argv[2][j])
                &&
                (l1==l2)
            ){
                bol=0;
                break;          
            }

            i++;
            j++;
        }
        if(bol==1){
            print(argv[2]);
        }else{
            print(argv[1]);
        }
        
        write(1,"\n",2);
    }else{
        write(1,"\n",2);
    }
}
