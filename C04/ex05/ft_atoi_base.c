int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			else if (base[j] == '+' || base[j] == '-')
				return (0);
			else if ((base[j] >= 9 && base[j] <= 13) || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}	
	return (-1);
}

char	*check_nbr(char *str, int *sign, char *base)
{
	int	i;

	*sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-' )
	{	
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	if (ft_is_in_base(str[i], base) == -1)
		return (0);
	return (&str[i]);
}

int	ft_atoi_base(char *str, char *base)
{
	char	*nbr;
	int		sign;
	int		res;
	int		base_len;
	int		val;

	base_len = check_base(base);
	if (base_len < 2)
		return(0);
	nbr = check_nbr(str, &sign, base);
	if (!nbr)
		return (0);
	res = 0;
	while (*nbr)
	{
		val = ft_is_in_base(*nbr, base);
		if (val == -1)
			break ;
		res = (res * base_len) + val;
		nbr++;
	}
	return (res * sign);
}

#include <stdio.h>

int     main(void)
{
    printf("--- Standard Tests ---\n");
    // Binary
    printf("Binary '1011': %d (Expected: 11)\n", ft_atoi_base("1011", "01"));
    // Hexadecimal
    printf("Hex 'AB': %d (Expected: 171)\n", ft_atoi_base("AB", "0123456789ABCDEF"));
    // Large Hex
    printf("Hex 'AB08F1': %d (Expected: 11208945)\n", ft_atoi_base("AB08F1", "0123456789ABCDEF"));

    printf("\n--- Sign & Space Tests ---\n");
    // Multiple signs: --- is negative
    printf("Signs '---10': %d (Expected: -10)\n", ft_atoi_base(" ---10", "0123456789"));
    // Spaces and plus
    printf("Spaces '  +42': %d (Expected: 42)\n", ft_atoi_base("   +42", "0123456789"));

    printf("\n--- Invalid Input Tests ---\n");
    // Invalid base (duplicate characters)
    printf("Invalid Base (dup): %d (Expected: 0)\n", ft_atoi_base("10", "11"));
    // Invalid base (contains +/-)
    printf("Invalid Base (+/-): %d (Expected: 0)\n", ft_atoi_base("10", "012+"));
    // Character not in base (should stop at 'z')
    printf("Stop at 'z': %d (Expected: 10)\n", ft_atoi_base("10z1", "0123456789"));

    return (0);
}
