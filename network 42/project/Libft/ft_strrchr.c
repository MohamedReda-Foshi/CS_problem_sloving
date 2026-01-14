char ft_strrchr(char s ,char c)
{
    int i;
    int con;

    i = 0;
    con = 0;

    while(s[i])
    {
        if(s[i]==c)
        {
            con++;
        }
        i++;
    }
}