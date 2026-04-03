/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:16:20 by macosta-          #+#    #+#             */
/*   Updated: 2026/03/13 17:25:27 by macosta-         ###   ########.fr       */
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
	*range = NULL; //initializing to NULL.
	*range = (int *)malloc(sizeof(int) * size); //CPU looks at the value of range 0x123 (the 
						    //memory we crated in main). * tells CPU go to 
						    //that address and change the value stored there.
						    // And malloc gives you a new block of memory and
						    // stores its address here, 0xABC.
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i; // (*range) says Go to 0x123 and see what addres is written 
				       // there: 0xABC. Now go to that address and chang the value
				       // it holds
		i++;
	}
	return (size);
}

int main(void)
{
	int *range;  // CPU reserves lets say 0x123 here. But no value assignation yet
	int size;
	int	value;
	int min;
	int max;
	int i;
	
	min = 7;
	max = 18;
	size = max - min;
	value = ft_ultimate_range(&range, min, max); //passing the empty box 0x123 to the fn. 
	if (value == -1 || value == 0)
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
