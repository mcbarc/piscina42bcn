/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:41:09 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/10 11:11:14 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
se neceistan jpor lo menos 2 elementos para empezar la serie
n = (n - 1) + (n - 2)
*/
/*
int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	i;
	int	next;
	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	a = 0;
	b = 1;
	i = 2;
	while (i < index)
	{
		next = a + b;
		a = b;
		b = next;
		i++;
	}
	return (b);
}
*/
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(2));
	printf("%i\n", ft_fibonacci(6));
	printf("%i\n", ft_fibonacci(7));
	printf("%i\n", ft_fibonacci(8));
	printf("%i\n", ft_fibonacci(9));
	printf("%i\n", ft_fibonacci(10));
	printf("%i\n", ft_fibonacci(11));
	printf("%i\n", ft_fibonacci(12));
	printf("%i\n", ft_fibonacci(23));
	return (0);
}
*/
