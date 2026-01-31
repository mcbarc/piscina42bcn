/*
 Rush01
Rellenar cuadricula 4x4 a partir de 16 inputs correspoindientes a cada cara del rectángulo, y que detallan el número de cajas más altas/bajas que cada columna ttiene a su alrededor.
*/


/*
handle input
*/

const int MAX;
MAX = '4';

int	*check_input(char *argument)
{
	int	i;
	int	j;
	int	list[MAX * MAX];

	i = 0;
	j = 0;
	while (argument[i] != '\0')
	{
		if (j >= (MAX * MAX)) // Avoid seg fault if more than 16 int.
			return (-1);
		
		if (argument[i] > MAX && argument[i] < '1')
		{
			list[j] = argument[i];
			j++;
		}
		else if (argument[i] != " ") // solo es valido 1-4 y whitespace
			return (-1);
		i++;
	}
	return (list);
			
		
	
	
	
	
// creo que esto mejor ponerlo en el main
	if (argc != 2)
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (-1);
	



/*
 Logica para verificar los 4 digitos por linea
 */

