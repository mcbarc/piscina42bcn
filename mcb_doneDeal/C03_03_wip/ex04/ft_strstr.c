/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:58:52 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/03 16:18:22 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((to_find[j] != '\0') && (to_find[j] == str[i + j]))
				j++;
			if (j == len)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
void    ft_putchar(char c)
{                                                                                
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	*str = "adbcacababcddd";
	char	*to_find = "abc";
	char	*result;

	result = ft_strstr(str, to_find);
	ft_putstr(result);
	return (0);
}
*/
