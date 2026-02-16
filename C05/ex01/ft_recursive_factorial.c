/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:38:43 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/05 18:01:12 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (result);
	result = (nb * ft_recursive_factorial(nb - 1));
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
	return (0);
}
*/
