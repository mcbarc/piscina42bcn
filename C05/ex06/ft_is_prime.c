/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:29:13 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/10 13:51:42 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/*
besides 2, no prime number is even. My first solution was much slower:
i = 2; 
while (i < nb / 2)
i do need to review math basics)
*/
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 2;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 3;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 5;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 7;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 11;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 10;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 1;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
	nb = 0;
	printf("%i is prime? %i\n", nb, ft_is_prime(nb));
}
*/
