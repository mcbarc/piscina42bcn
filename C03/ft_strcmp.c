int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
While there is space in dest and dest / src are equal, keep running.
Whene src reaches end or src dest are not equal, get the chars on that position
and subract one anoder to get a 0, positive or negative value.
*/
