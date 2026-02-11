/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:36:02 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/10 11:49:31 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(100));
	printf("%i\n", ft_sqrt(10000));
	printf("%i\n", ft_sqrt(16));
	printf("%i\n", ft_sqrt(93));
	printf("%i\n", ft_sqrt(37));
	printf("%i\n", ft_sqrt(23));
	return (0);
}
*/
