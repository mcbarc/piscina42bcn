nclude <unistd.h>

// Prototipo de tu función para que el main sepa que existe
char	*ft_strncpy(char *dest, char *src, unsigned int n);

// Función auxiliar para imprimir caracteres (requisito 42)
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Función auxiliar para imprimir cadenas
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	// Definieorigen y un destino
	char	src[] = "42isLife";
	char	dest[15] = "XXXXXXXXXXXXXXX";
	unsigned int n = 12;
	unsigned int i;

	ft_strncpy(dest, src, n);

	// Impresión resultados
	ft_putstr("Resultado visual: ");
	ft_putstr(dest);
	ft_putchar('\n');

	// Comprobar byte a byte si strncpy rellen con nulos si n > longitud de src
	ft_putstr("Contenido del buffer (byte a byte):\n");
	i = 0;
	while (i < 15)
	{
		if (dest[i] == '\0')
		{
			// Si es un nulo, imprimimos una marca visual
			write(1, "[\\0]", 4);
		}
		else
		{
			// Si es un caracter normal, lo mostramos
			ft_putchar(dest[i]);
		}
		i++;
	}
	ft_putchar('\n');

	return (0);
}
