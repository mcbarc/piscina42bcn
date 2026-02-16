/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:47:32 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/12 18:29:15 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*new_str;
	
	size = ft_strlen(src);
	new_str =(char *)malloc(sizeof(char) * size + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, src);
	return (new_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char 	*str = "el noi de la mare";
	char	*dest;

	dest = ft_strdup(str);
	if (dest)
	{
		printf("%s\n", dest);
		free(dest);
	}
	return (0);
}
*/
