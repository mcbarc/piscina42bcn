/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:36:35 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/08 23:22:39 by almolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02lib.h"

int	check_dict(char *dict_buffer, char *dictionary)
{
	int	i;
	int	j;
	char	type;

	type = 'N';
	i = 0;
	j = 0;
	while (dict_buffer[i])
	{
		while (ft_is_number(dict_buffer[i]))
		{
			dictionary[j] = dict_buffer[i];
			i++;
			j++;
		}
		if (i == 0)
			return (0);
		while (dict_buffer[i] == ' ' || dict_buffer[i] == ':')
		{
			if (dict_buffer[i] == ':')
			{
				if (type == 'W')
					return (0);
				dictionary[j] = ':';
				j++;
				type = 'W';
			}
			i++;
		}
		if (type != 'W')
			return (0);
		while (ft_is_printable(dict_buffer[i]))
		{
			if (dict_buffer[i] == ' ' && dict_buffer[i - 1] == ' ')
			{
				i++;
				continue ;
			}
			dictionary[j] = dict_buffer[i];
			i++;
			j++;
		}
		if (dict_buffer[i] == '\n')
		{
			dictionary[j] = '\n';
			i++;
			j++;
			type = 'N';
			continue ;
		}
		return (0);
	}
	dict_buffer[i] = '\0';
	return (1);
}

int	get_dict_len(char *filename)
{
	int		fd;
	int		dict_len;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	dict_len = 0;
	while (read(fd, &c, 1))
		dict_len++;
	close(fd);
	return (dict_len);
}

int	fill_buffer(char *filename, char *buffer)
{
	int		fd;
	int		i;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while (read(fd, &c, 1))
	{
		buffer[i] = c;
		i++;
	}
	close(fd);
	return (1);
}

char	*get_dictionary(char *filename)
{
	int	dict_len;
	char	*dict_buffer;
	char	*dictionary;

	dict_len = get_dict_len(filename);
	if (!dict_len)
	{
		printf("1");
		return (NULL);
	}
	dict_buffer = (char *)malloc(dict_len * sizeof(char));
	if (!dict_buffer)
	{
		printf("2");
		return (NULL);
	}
	if (!fill_buffer(filename, dict_buffer))
	{

		printf("3");
		return (NULL);
	}
	dictionary = (char *)malloc(dict_len * sizeof(char));
	if (!dictionary)
	{
		printf("4");
		return (NULL);
	}
	if (!check_dict(dict_buffer, dictionary))
	{
		printf("5");
		return (NULL);
	}
	return (dictionary);
}

void	find_occurrence(char *dict, char *number, int number_len)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i])
	{
		j = 0;
		while (dict[i + j] == number[j])
			j++;
		if (j == number_len && dict[i + j] == ':')
		{
			print_number(dict, (i + j + 1));
			break ;
		}
		i++;
	}
}

