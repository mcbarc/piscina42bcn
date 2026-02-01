/*
ex00
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
ex01
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
ex02
*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
ex03
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
ex04
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;

	*a = tmp / *b;
	*b = tmp % *a;
}

/*
ex05_Array notation
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
ex05_pointer arithmetic
*/

void ft_putstr(char *str)
{
	// start = *str; no need here but keep in mind that this method will lose the first address!!	

	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
	
/*
ex06
*/

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
ex07
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	tmp;

	first = 0;
	last = size - 1;
	while(first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}
}

/*
ex08
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	last;
	int	tmp;
	int	j;

	
	j = 0;
	last = size - 1;
	while (j < size)
	{
		i = 0;
		while (i < last) //
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		last = last - 1;
		j++;
	}
}
	

 
