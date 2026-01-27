char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	src_ended;

	i = 0;
	src_ended = 0;
	while(i < n)
	{
		if (src[i] != '\0' && !src_ended)
			src_ended = 1;
		if (!src_finished)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
