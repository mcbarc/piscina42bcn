/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:05:39 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/05 11:55:59 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (sign % 2 != 0)
		result = result * -1;
	return (result);
}

/*
int ft_atoi(char *str)
{
    int     i;
    int     result;
    int     sign;

    i = 0;
    sign = 0;
    result = 0;
    while (str[i])
    {
        if (str[i] == '-')
            sign++;
        else if (sign && (str[i] != '+') && !(str[i] >= 48 && str[i] <= 57))
            break ;
        if (str[i] >= 48 && str[i] <= 57)
            result = (result * 10) + (str[i] - 48);
        else if (result && !(str[i] >= 48 && str[i] <= 57))
            break ;
        i++;
    }
    if (sign % 2 != 0)
        result = result * -1;
    return (result);
}
*/

/*
// ft_pow descartada. la use en primeras iteraciones del ex pero not needed
int	ft_pow(int n)
{
	int	result;

	result = 1;
	if (n < 0)
		return (0);
	while (n > 0)
	{
		result = result * 10;
		n--;
	}
	return (result);
}
*/

/*
int	main(void)
{
	int	n;

	n = ft_atoi("325");
	printf("%i\n", n);
	n = ft_atoi("-a-325");
	printf("%i\n", n);
	n = ft_atoi("---+--+1234ab567");
	printf("%i\n", n);
	n = ft_atoi("abc1234");
	printf("%i\n", n);
	n = ft_atoi("-an--567");
	printf("%i\n", n);

	return (0);
}
*/
