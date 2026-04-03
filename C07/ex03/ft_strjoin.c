#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		i;
	int		count;
	char	*temp;
	
	sep_len = ft_strlen(sep);
	i = 0;
	count = 0;
	if (size == 0)
	{
		temp = (char *)malloc(1);
		if (temp)
			temp[0] = '\0';
		return temp;
	}
	while (i < size)
	{
		count += ft_strlen(strs[i]); // there is an address stored at strs[i], just what strlen expects!
		i++;
	}
	temp = (char *)malloc(sizeof(char) * count + (sep_len * (size - 1) + 1));
	if (!temp)
		return NULL;
	temp[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(temp, strs[i]);
		if (i < size - 1)
			ft_strcat(temp, sep);
		i++;
	}
	return (temp);
}

#include <stdio.h>

// Prototype of your function
char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char    *result;
    char    *strs[] = {"Hello", "world", "from", "Barcelona"};
    char    *separator = " - ";
    int     size = 4;

    printf("--- Test 1: Standard Join ---\n");
    result = ft_strjoin(size, strs, separator);
    if (result)
    {
        printf("Result: |%s|\n", result);
        free(result);
    }
    else
        printf("Result is NULL (Check your malloc or size logic)\n");

    printf("\n--- Test 2: Size 0 (Should return empty string) ---\n");
    // Per 42 subject: if size is 0, return a freeable empty string.
    result = ft_strjoin(0, strs, separator);
    if (result)
    {
        printf("Result: |%s|\n", result);
        free(result);
    }

    printf("\n--- Test 3: Single element (No separator should appear) ---\n");
    result = ft_strjoin(1, strs, separator);
    if (result)
    {
        printf("Result: |%s|\n", result);
        free(result);
    }

    return (0);
}

