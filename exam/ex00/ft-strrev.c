char	ft-strlen(char *str)
{
    int i;

    i = 0
    while (str[i])
        i++;
    return (i)
}

char	*ft_strrev(char *str)
{
    int i;
    int len;
    char temp;

    i = 0;
    len = ft-strlen (str) - 1;
    while (len > i)
    {
        temp = str [i];
        str [i] = str [len];
        str [len] = temp;
        i++;
        len--;
    }
    return (str);

}
/* Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/