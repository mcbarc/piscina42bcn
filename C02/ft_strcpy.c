/*
char	*low_strcpy(char *dest, char *src)
{
	char *start;

	start = dest;
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start); //At dist point the src pointer is no longer looking at the first character, but at the last one. That's why we need to save and remember the entrance point before the loop
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest)
}
