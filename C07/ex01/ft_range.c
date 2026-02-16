/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:39:45 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/12 19:14:45 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *tmp_range;
	int	blocks;
	int	i;

	if (min >= max)
		return (NULL);
	blocks = max - min;
	tmp_range = (int *)malloc(sizeof(int) * blocks);
	if (tmp_range == NULL)
		return (NULL);
	i = 0;
	while (i < blocks)
	{		
		tmp_range[i] = min;
		min++;
		i++;
	}
	return (tmp_range);
}

/*
int	main(void)
{
	int	*range;
	int	i;
	int size;
	int min;
	int max;
	
	size = max - min;
	range = ft_range(min, max);
	if (!range)
		return (1);
	i = 0;
	while (range[i] < size - 1)
	{
		printf("%d, ", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
