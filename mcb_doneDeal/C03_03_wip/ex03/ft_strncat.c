/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:02:01 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/03 19:59:17 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	dest[50] = "Desayuno... ";
	char	src[20] = "1234567890abcdefghij";

	ft_strncat(dest, src, 7);
	ft_putstr(dest);
	write(1, "\n", 1);
	ft_strncat(dest, src, 10);
    ft_putstr(dest);
    write(1, "\n", 1);
	ft_strncat(dest, src, 17);
    ft_putstr(dest);
    write(1, "\n", 1);
}
*/
