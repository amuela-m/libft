#include <string.h>
#include <stdio.h>

/*
Se utiliza para convertir una cadena de caracteres que representa un número en su valor entero equivalente.
Toma una cadena que representa un número y devuelve su valor entero equivalente. Esta función maneja correctamente los signos (+ y -) 
y los espacios en blanco antes del número, y omite cualquier otro carácter que no sea un dígito.

Pasos: 
1. Inicia una variable result que almacenará el valor entero equivalente de la cadena.
2. Inicia una variable sign que almacenará el signo del número (1 para +; -1 para -).
3. Inicia un índice i (contador) para recorrer la cadena str.
4. Ignora los espacios iniciales y otros caracteres de espacio en blanco, tabulaciones, etc...
5. Determina el signo del número: 
- Si encuentra un signo -: establece sign en -1 y avanza al siguiente caracter.
- Si encuentra un signo +: avanza al siguiente caracter.
6. Convierte los dígitos de la cadena de valor entero equivalente, multiplicando el valor actual
de result por 10 y sumando el valor del dígito actual.
7. Avanza al siguiente caracter de la cadena y repite el proceso hasta que se encuentre un caracter que no sea un dígito.
8. Aplica el signo al resultado y lo devuelve.
*/

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[result] == ' ' || str[result] == '\n' || str[result] == '\t'
		|| str[result] == '\v' || str[result] == '\f' || str[result] == '\r')
		result++;
	if (str[result] == '-' || str[result] == '+')
	{
		if (str[result] == '-')
			sign = -1;
		result++;
	}
	while (str[result] >= '0' && str[result] <= '9')
	{
		i = (i * 10) + (str[result] - '0');
		result++;
	}
	return (i * sign);
}

int main(void)
{
	const char	*str;

	str = " -12345";
	printf("%d\n", ft_atoi(str));
	return (0);
}