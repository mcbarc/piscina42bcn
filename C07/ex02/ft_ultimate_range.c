/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:16:20 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/12 20:51:00 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int	size;
	int	i;

	if (min >= max)
	{	
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = NULL;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
    return (size);
}

int main(void)
{
	int *range;
    int size;
	int	value;
    int min;
    int max;
	int i;
	
	min = 7;
	max = 18;
    size = max - min;
    value = ft_ultimate_range(&range, min, max);
    if (!range)
        return (1);
    i = 0;
    while (i < size)
    {
		printf("%d___", value);
        printf("%d\n", range[i]);
		i++;
    }
    free(range);
    return (0);
}
