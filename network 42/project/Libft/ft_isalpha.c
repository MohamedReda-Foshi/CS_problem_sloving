#
int ft_isalpha(char c){
    
    if(ft_islower(c) || ft_isupper(c)){
        return 1;
    }else
        return 0;
}