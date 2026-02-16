/*
Write a function that takes a char ** and a string, and sets the pointer in main to a duplicated version of that string
*/

#include <stdlib.h>
#include <stdio.h>

void	ft_set_string(char **target, char *src)
{
	int	i;
	char	*temp; //using a local helper so its more readable.
	
	i = 0;
	while (src[i])
		i++;

	temp = (char *)malloc(sizeof(char) * (i + 1));
	if (!temp)
	{
		*target = NULL;
		return ;
	}
	i = 0;
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	*target = temp;
}

/*
void	ft_set_string(char **target, char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	*target = (char *)malloc(sizeof(char) * (i + 1));
	if (!*target)
		*target = NULL;
	i = 0;
	while (src[i])
	{
		(*target)[i] = src[i];
		i++;
	}
	(*target)[i] = '\0';

}
*/

int	main(void)
{
	char	*string;
	char	*cpstring;

	string = "ola k ase";
	ft_set_string(&cpstring, string);
	printf("%s", cpstring);
	free(cpstring);
	return (0);
}
