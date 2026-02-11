/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:11:48 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/27 17:05:44 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*                              
void    printchar(char c)                                                        
{                                                                                
    write(1, &c, 1);                                                             
}                                                                                
                                                                                 
void    printstr(char *str)                                                      
{                                                                                
    int i;                                                                       
                                                                                
    i = 0;                                                                       
    while (str[i])                                                               
    {                                                                            
        printchar(str[i]);                                                       
        i++;                                                                     
    }                                                                            
}                                                                                
                                                                                 
int main(void)                                      
{                                                                                
	char			dest[19] = "ZZZZZZZZZZZZZZZZZZ";                                                
	char			src[] = "Hola Joan!!";
	unsigned int	z;
	unsigned int	i;

	z = 15;
	i = 0;                                                              
	ft_strncpy(dest, src, z);                                                       
	printstr(dest);         
	write(1, "\n", 1);
	printstr("Buffer byte a byte:\n");
	while (i < 19)
	{
		if (dest[i] == '\0')
		{
			write(1, "[0]", 3);
			}
		else
		{
			printchar(dest[i]);
		}
		i++;
	}
	printchar('\n');
	return (0);
}
*/
