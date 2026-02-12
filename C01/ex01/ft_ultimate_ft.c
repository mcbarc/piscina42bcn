/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 16:15:30 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/26 17:45:12 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
NORMINETTE DOES NOT ALLOW DECLARATION AND ASSIGNEMENT IN THE SAME LINE.
DONE THIS HERE JUST TO TEST THE EXERCISE, SINCE WE NEED 9 ADDRESSES
int	main(void)
{
	int		n;
	int		*n1 = &n;
	int		**n2 = &n1;
	int		***n3 = &n2;
	int		****n4 = &n3;
	int		*****n5 = &n4;
	int		******n6 = &n5;
	int		*******n7 = &n6;
	int		********n8 = &n7;
	int		*********n9 = &n8;
	char	c1;
	char	c2;

	n = 0;
	ft_ultimate_ft(n9);
	c1 = (n / 10) + '0';
	c2 = (n % 10) + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, "\n", 1);
	return (0);
}
*/
