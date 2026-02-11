/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almolina <almolina@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:03:02 by almolina          #+#    #+#             */
/*   Updated: 2026/02/08 18:15:29 by almolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02lib.h"

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}
