/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:13:19 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/11 17:28:35 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;

	k = 0;
	while (src[slen])
		slen++;
	dlen = 0;
	while (dest[dlen] && dlen < size)
		dlen++;
	if (dlen == size)
		return (size + slen);
	i = dlen;
	j = 0;
	while (src[j] && i + j < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dlen + slen);
}


#include <stdio.h>

int	main(void)
{
	char	str1[50] = "'Billy Joe'...";
	char	str11[20] ="'Billy Joe'...";
	char	*str2;
	int		res;

	str2 = "es una cancion popular";
	res = ft_strlcat(str1, str2, sizeof(str1));
	printf("frase:%s\n", str1);
	printf("resulting lenght%i\n", res);
	res = ft_strlcat(str11, str2, sizeof(str11));
	printf("frase:%s\n", str11);
	printf("resulting lenght%i", res);
	return (0);
}
