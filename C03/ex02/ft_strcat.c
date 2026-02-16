/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:49:24 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/03 16:43:26 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <unistd.h>

void putnbr(int n)                                                               
{                                                                                
    char    c;                                                                   
                                                                                 
    if (n < 0)                                                                   
    {                                                                            
        write(1, "-", 1);                                                        
        n = -n;                                                                  
    }                                                                            
    if (n >= 10)                                                                 
    {                                                                            
        putnbr(n / 10);                                                          
    }                                                                            
    c = (n % 10) + '0';                                                          
    write(1, &c, 1);                                                             
}                                                                                
                                                                                 
int main(void)                                                                   
{
    char	string1[50] = "Hello Johnny Boy";
    char	*string2 = "aaaa vvvvv shsh sh";
	int		i;

	i = 0;
    ft_strcat(string1, string2);
    while(string1[i])
	{
		write(1, &string1[i], 1);
		i++;
	}
}
*/
