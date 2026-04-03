/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:09:16 by macosta-          #+#    #+#             */
/*   Updated: 2026/04/03 13:12:44 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (base[i])
			i++;
		return (i);
	}
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int check_base(char *base)
{
	int	size;
	int	i;
	int	j;

	size = get_index('\0', base);
	if (!size || size == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' 
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;		
	}
	return (size);
}

int	get_nbr_len(long n, int base_len)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		if (n < 0)
			n = -n;
	}
	while (n > 0)
	{
		 n /= base_len;
		 len++;
	}
	return (len);
}

long	ft_atoi_base(char *str, char *base)
{
	long	res;
	int	sign;
	int	b_len;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	b_len = get_index('\0', base);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (get_index(str[i], base) != -1)
	{
		res = (res * b_len) + get_index(str[i], base);
		i++;
	}
	return (res * sign);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	int	len_baseto;
	int	len_final;
	char	*res;

	len_baseto = check_base(base_to);
	if (!len_baseto || !check_base(base_from))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	len_final = get_nbr_len(n, len_baseto);
	if (!(res = malloc(sizeof(char) * (len_final + 1))))
		return (NULL);
	res[len_final--] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[0] = base_to[0];
	while (n > 0)
	{
		res[len_final--] = base_to[n % len_baseto];
		n /= len_baseto;
	}
	return (res);
}

int		main(void)
{
	char	*result;

	// Test 1: Your "poniflat" example (3542 in base 8 to base 5)
	// atna (base 8) -> 3542 (base 10) -> yxmtxz (base 5)
	result = ft_convert_base("atna", "poniflat", "xyztm");
	printf("Test 1 (atna to base 5): %s\n", result);
	free(result);

	// Test 2: Negative Decimal to Hexadecimal
	// -42 (base 10) -> -2A (base 16)
	result = ft_convert_base("-42", "0123456789", "0123456789ABCDEF");
	printf("Test 2 (-42 to Hex): %s\n", result);
	free(result);

	// Test 3: Zero case
	result = ft_convert_base("0", "0123456789", "01");
	printf("Test 3 (Zero to Binary): %s\n", result);
	free(result);

	// Test 4: INT_MIN (The absolute stress test)
	result = ft_convert_base("-2147483648", "0123456789", "0123456789");
	printf("Test 4 (INT_MIN): %s\n", result);
	free(result);

	return (0);
}
