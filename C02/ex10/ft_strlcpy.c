/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:28:11 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/02 16:35:31 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lensrc;
	unsigned int	i;

	lensrc = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	if (size == 0)
		return (lensrc);
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lensrc);
}

/*
As per the definition, size includes the nul terminator, and src must 
be nul terminated. Size understood as a buffer, so it "should" be shorter (or
equal?) than the max number of items that dest can hold.
strlcpy copies src to dest if the conditions are met, AND also returns the
lenght of the src.
*/
/*
#include <unistd.h>

void    ft_putchar(char c)                                                       
{                                                                                
    write(1, &c, 1);                                                             
}                                                                                
                                                                                 
void    ft_putstr(char *str)                                                     
{                                                                                
    int i;                                                                       
                                                                                 
    i = 0;                                                                       
    while(str[i])                                                                
    {                                                                            
        ft_putchar(str[i]);                                                      
        i++;                                                                     
    }                                                                            
}

void    ft_putnbr(int nb)                                                        
{                                                                                
    char    r;                                                                   
                                                                                 
    if (nb == -2147483648)                                                       
    {                                                                            
        write(1, "-2147483648", 11);                                             
        return ;                                                                 
    }                                                                            
    if (nb < 0)                                                                  
    {                                                                            
        write(1, "-", 1);                                                        
        nb = -nb;                                                                
    }                                                                            
    if (nb >= 10)                                                                
        ft_putnbr(nb / 10);                                                      
    r = (nb % 10) + '0';                                                         
    write(1, &r, 1);                                                             
    return ;                                                                     
} 

int	main(void)
{
	char			dest[25] = "dddd dddd dddd rrrrr";
	char			*src;
	unsigned int	n;

	src = "copiado";
	write(1, "Before: ", 9);
	ft_putstr(dest);
	n = ft_strlcpy(dest, src, 18);
	write(1, "\n", 1);
	ft_putnbr(n);
	write(1, "\nAfter: ", 8);
	ft_putstr(dest);
	return (0);
}
*/
