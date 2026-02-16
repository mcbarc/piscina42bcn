/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almolina <almolina@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:34:12 by almolina          #+#    #+#             */
/*   Updated: 2026/02/08 22:00:29 by almolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02lib.h"

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[i + j])
	{
		s1[i + j] = s2[i + j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*thousand_maker(int thousand_zeros)
{
	int		str_len;
	int		i;
	char	*str;

	str_len = (3 * thousand_zeros) + 1;
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
	{
		// Gestionar error
		return (0);
	}
	str[0] = '1';
	i = 1;
	while (i <= (thousand_zeros * 3))
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
	// Free aquest malloc en algun punt mes tard o no cal?
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
