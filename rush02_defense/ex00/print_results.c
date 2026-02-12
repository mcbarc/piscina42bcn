/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:36:35 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/08 23:27:47 by almolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02lib.h"

void	print_number(char *dict, int start_index)
{
	while (dict[start_index] && dict[start_index] != '\n')
	{
		write(1, &dict[start_index], 1);
		start_index++;
	}
}

void	print_hundreds(char *number, int index, char *dict)
{
	if (number[index] == '0')
		return ;
	if (index)
		write(1, " ", 1);
	find_occurrence(dict, &number[index], 1);
	write(1, " ", 1);
	find_occurrence(dict, "100", 3);
}

void	print_tens(char *number, int index, char *dict)
{
	char	str[3];
	if (number[index] >= '2')
	{
		str[0] = number[index];
		str[1] = '0';
		str[2] = '\0';
		if (index)
			write(1, " ", 1);
		find_occurrence(dict, str, 2);
		if (number[index + 1] != '0')
		{
			write(1, "-", 1);
			find_occurrence(dict, &number[index + 1], 1);
		}
		
	}
	else if (number[index] == '1')
	{
		str[0] = number[index];
		str[1] = number[index + 1];
		str[2] = '\0';
		if (index)
			write(1, " ", 1);
		find_occurrence(dict, str, 2);
	}
	else if (number[index + 1] != '0')
	{
		if (index)
			write(1, " ", 1);
		find_occurrence(dict, &number[index + 1], 1);
	}
}

void	print_units(char *number, int index, char *dict)
{
	if (index)
		write(1, " ", 1);
	find_occurrence(dict, &number[index], 1);
}

void	print_result(char *input, char *dictionary)
{
	int	input_len;
	int	i;
	int	block_num;
	int	num_position;

	input_len = ft_strlen(input);
	i = 0;
	while (input[i])
	{
		block_num = (input_len - (i + 1)) / 3;
		num_position = (input_len - (i + 1)) % 3;

		if (num_position == 2)
		{
			if (input[i] == '0' && input[i + 1] == '0' && input[i + 2] == '0')
			{
				i += 3;
				continue ;
			}
			print_hundreds(input, i, dictionary);
		}
		else if (num_position == 1)
		{
			print_tens(input, i, dictionary);
			num_position = 0;
			i++;
		}
		else
			print_units(input, i, dictionary);	
		if (block_num != 0 && num_position == 0)
		{
			write(1, " ", 1);
			find_occurrence(dictionary, thousand_maker(block_num), (block_num * 3) + 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
