#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){

    if (size==0){
        return 0;
    }
    int i=0;
    
    while (src[i]!='\0' && i<(int)size-1)
    {
        dest[i]=src[i];
        i++;
    }

    dest[i]='\0';

    return i;
}


int main(void)
{
    char src1[] = "hello";
    char src2[] = "abcdefghijklmnopqrstuvwxyz";
    char dest[10];
    char dest2[5];
    char dest3[1];

    unsigned int r;

    printf("=== Case 1: enough space ===\n");
    r = ft_strlcpy(dest, src1, sizeof(dest));
    printf("src  : \"%s\"\n", src1);
    printf("dest : \"%s\"\n", dest);
    printf("ret  : %u\n\n", r);

    printf("=== Case 2: truncation (small buffer) ===\n");
    r = ft_strlcpy(dest2, src1, sizeof(dest2));
    printf("src  : \"%s\"\n", src1);
    printf("dest : \"%s\"\n", dest2);
    printf("ret  : %u\n\n", r);

    printf("=== Case 3: size = 1 ===\n");
    r = ft_strlcpy(dest3, src1, sizeof(dest3));
    printf("src  : \"%s\"\n", src1);
    printf("dest : \"%s\"\n", dest3);
    printf("ret  : %u\n\n", r);

    printf("=== Case 4: long src into small buffer ===\n");
    r = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("src  : \"%s\"\n", src2);
    printf("dest : \"%s\"\n", dest2);
    printf("ret  : %u\n\n", r);

    return 0;
}

