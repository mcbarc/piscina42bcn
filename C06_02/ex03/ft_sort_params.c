/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:23:48 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/11 16:03:17 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc;
	if (argc < 3)
		return (1);
	while (j > 1)
	{
		i = argc;
		while (i > 2)
		{
			if (ft_strcmp(argv[i - 2], argv[i - 1]) < 0)
				ft_swap(&argv[i - 2], &argv[i - 1]);
			i--;
		}
		j--;
	}
	i = argc;
	while (i > 1)
	{
		ft_printstr(argv[i - 1]);
		i--;
	}
	return (0);
}
