#include <stdlib.h>

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
	int	sep_len;
	int	i;
	int	count;
	char	*temp;

	
	sep_len = ft_strlen(sep);
	i = 0;
	count = 0;
	while (i < size - 1)
	{
		count += strlen((*strs)[i]);
		i++;
	}
	temp = (char *)malloc(sizeof(char) * count + ((sep_len + 1) * size));
	if (!temp)
		return = NULL;
	if (size == 0)
		return (free(temp));
	i = 0;
	while (i < size -1)
	{
		ft_strcat(temp, (*strs)[i]);
		i++;
	}
	return (temp);
}

#include <stdio.h>
#include <stdlib.h>

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

