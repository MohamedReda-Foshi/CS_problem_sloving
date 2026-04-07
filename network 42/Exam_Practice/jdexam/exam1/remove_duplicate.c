int remove_duplicate(int *arr) {
    int i = 0;
    int j;
    int k;
    int a=0;
    int leng=sizeof(arr)-sizeof(arr[0]);
    #define MAX_SIZE 100
    
    int arr1[MAX_SIZE];

    
    
    while (i<leng) {
        j=i+1;
        while(j<leng){
            if(arr[i+j]!=arr[j]){
              arr1[a]=arr[j];
            a++;  
            }
         j++;
         
     }
        i++;
    }
    return arr1;
}


int main(){
    int a[]={1, 1, 2, 2, 3, 4, 4, 5};
    remove_duplicates(a);
    
}


