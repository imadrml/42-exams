
int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) /* must be ==*/
        i++;
    return (s1[i] - s2[i])
}
/* fonction comper the argument s1 - s2 fi char liysawih man tableau ascii
Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/