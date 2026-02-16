/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:28:37 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/25 12:58:06 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
		return ;
	}
	else
	{
		write(1, &pos, 1);
		return ;
	}
}

/*
int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-2);
	ft_is_negative(0);
	return (0);
}
*/
