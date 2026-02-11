/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:21:25 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/26 15:45:47 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
void	printchar(char c)
{
	write(1, &c, 1);
}

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	printchar((n % 10) + '0');
}

int	main(void)
{
	char	*str;
	int		result;

	str = "Count chars aka bytes on string";
	result = ft_strlen(str);
	write(1, str, result);
	write(1, "\nLenght: ", 9);
	printnbr(result);
	write(1, "\n", 1);
	return (0);
}
*/
