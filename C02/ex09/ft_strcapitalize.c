/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:19:12 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/28 16:30:12 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/*
Primer while para la frase entera
necesito una flag para marcar ppo y fin de palabra
If any non-letter printable char before a letter, upper that letter and lower
all the rest until you hit a non-letter and non-digit printable char.
*/
