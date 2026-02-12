/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:42:54 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/29 15:02:33 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*
HERE ft_putstr is using 'pointer arithmetic'. It is more clear to use array 
notation, but keeping this as a reminder.
While knows that when it reaches 
'\0' aka NUL, it must stop. str is storing an address, and by saying str++ it 
 knows that you are looking for the following byte on the chain.
*/
/*
int	main(void)
{
	char	*string;

	string = "Hey, Joe! Great days ahead";
	ft_putstr(string);
}
*/
