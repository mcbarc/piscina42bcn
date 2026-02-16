/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02lib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almolina <almolina@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:53:11 by almolina          #+#    #+#             */
/*   Updated: 2026/02/08 23:28:19 by almolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02LIB_H
# define RUSH02LIB_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

//utils_dict.c
int	ft_is_number(char c);
int	ft_is_space(char c);
int	ft_is_printable(char c);

//utils.c
char	*ft_strcat(char *s1, char *s2);
int	ft_strcmp(char *s1, char *s2);
char	*thousand_maker(int thousand_zeros);
int	ft_strlen(char *str);

//dict_functions.c
int	check_dict(char *dict_buffer, char *dictionary);
int	get_dict_len(char *filename);
int	fill_buffer(char *filename, char *buffer);
char	*get_dictionary(char *filename);
void	find_occurrence(char *dict, char *number, int number_len);

//print_results.c
void	print_number(char *dict, int start_index);
void	print_hundreds(char *number, int index, char *dict);
void	print_tens(char *number, int index, char *dict);
void	print_units(char *number, int index, char *dict);
void	print_result(char *input, char *dictionary);

# endif
