/*
ex00
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')   /// If dest has less bytes availabe than src, it will keep copying, overwritting undesired memory slots, or Sef Fault
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
ex01
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')	// if n is shorter than src, it never adds a nul terminator, leaving the string open. 
	{
		dest[i] = src[i];			// copying until n bytes or full lenght of source (avoid copying trash memory)
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';				// If there are still bytes available in dest, it fills them with '/0'
		i++;
	}
	return (dest);
}

/*
ex02
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <=90) || !(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

/*
ex03
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*
ex04
*/

int	ft_is_lowercase(char *str)
{
	while(str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

/*
ex05
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}

/*
ex06
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);

/*
ex07
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
ex08
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
ex09
*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word =  1;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if ((new_word) && (str[i] >= 97 && str[i] <= 122))
			{
				str[i] = str[i] - 32;
			}
			else if (!(new_word) && (str[i] >= 65 && str[i] <= 90))
				str[i] = str[i] + 32;		
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/*
ex10
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	j = 0;
	while (src[j] && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

/*
ex11
*/

void	ft_putstr_non_printable(char *str)
{
	 
}
