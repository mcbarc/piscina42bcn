/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:05:23 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/27 16:07:51 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
void	printchar(char c)
{
	write(1, &c, 1);
}

void	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		printchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str1[] = "Hello Jon";
	char	str2[] = "Hola Joan";

	ft_strcpy(str1, str2);
	printstr(str1);
}
*/
