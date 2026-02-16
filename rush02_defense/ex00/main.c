/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:36:35 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/08 23:29:09 by almolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02lib.h"

int	print_error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

int	dict_error(void)
{
	write(1, "Dict Error\n", 11);
	return (1);
}

int	check_input(int argc, char *str)
{
	int	i;

	if (argc < 2 || argc > 3)
		return (0);
	i = 0;
	while (ft_is_number(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*filename;
	char	*dictionary;
	char	*input;

	if (!check_input(argc, argv[argc - 1]))
		return (print_error());
	input = argv[argc - 1];
	if (argc != 3)
		filename = "numbers.dict";
	else
		filename = argv[1];
	dictionary = get_dictionary(filename);
	if (!dictionary)
		return (dict_error());
	print_result(input, dictionary);
	return (0);
}
