/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:03:56 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/01 15:27:28 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
Si son iguales, el resultado es 0. 
Usamos unsigned char por convencion, con tal de que el codigo funcione igual 
en diferentes plataformas. Por ejemplo el © , 169 en ascii, no cabe en un
un (signed) char -> -128 to +128. En este caso el binario 10101001 cuando llega
a 128, el resto de bits que faltan por contar los hace negativos. El caso es que
para evitar esto, casteamos el Ascii character como unsigned char y asi
podemos calcular los 256 (0-255) sin problemas. 
Cuando realizamos la operacion matematica, los valores son promovidos a int
para realizar la operacion, y obtenemos un int positivo o negativo como 
resultado.
"By forcing unsigned char before the subtraction, the function ensures that the 
Positive or Negative result is based on the true 0-255 value of characters, not
their "signed" interpretation".
*/
/*
#include <unistd.h>

void putnbr(int n)
{
	char	c;

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

int	main(void)
{
	char	*string1 = "Hello Johnny Boy";
	char	*string2 = "Hello Johnny Cash";
	int		r;

	r = ft_strcmp(string1, string2);
	putnbr(r);
}
*/
