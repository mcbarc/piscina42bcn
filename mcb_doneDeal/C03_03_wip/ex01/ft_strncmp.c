/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:28:31 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/03 16:37:51 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
    char    *string1 = "Hello Johnny Boy"; 
    char    *string2 = "Hello Johnny Cash"; 
    int     r; 
	int		n;

	n = 14;
    r = ft_strncmp(string1, string2, n); 
    putnbr(r); 
}  
*/
