/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:47:30 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/26 11:07:38 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
Aqui se ve como los punteros sirven para trascender el scope de las funciones.
A la fn le paso las direcciones de dos integers, de manera que fn puede
manipular el contenido en esa direccion, de manera que la funcion ppal, cuando
acceda a x despu'es de ejecutarse fn, ya se encontrara con el valor modificado.

int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 9;
	b = 4;
	ft_div_mod(a, b, &x, &y);
	x = (x % 10) + '0';			//Write solo entiende ascii. Por eso ofseteamos
	y = (y % 10) + '0';			//el int por 48 ('0')
	write(1, &x, 1);
	write(1, "\n", 1);
	write(1, &y, 1);
	return (0);
}
*/
