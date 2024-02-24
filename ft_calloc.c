#include <stdio.h>
#include <string.h>

/*
CALLOC: son los cambios que hacen los enfermeros para trabajar en esos quirófanos. 
Calloc te inicializa el bloque de memoria en 0 y tu luego puedes escribir. 
Esta función es una implementación de calloc, que se utiliza para asignar un bloque de memoria y 
establecer todos sus bytes en cero. Aquí está la explicación paso a paso de la función:

- size_t tot_size; - Declara una variable tot_size para almacenar el tamaño total de la memoria requerida, 
que es el producto de count y size.

- void *dst; - Declara un puntero dst que se utilizará para apuntar al bloque de memoria asignado.

- tot_size = size * count; - Calcula el tamaño total de la memoria necesaria multiplicando size por count.

- if (!(dst = malloc(tot_size))) return (0); - Utiliza malloc para asignar memoria del tamaño tot_size. 
Si la asignación de memoria falla (es decir, malloc devuelve NULL), la función retorna NULL, 
indicando que la asignación de memoria falló.

- ft_memset(dst, 0, tot_size); - Llama a la función ft_memset 
(probablemente una implementación personalizada de memset) para establecer todos los bytes del bloque de memoria a cero.

- return (dst); - Retorna el puntero dst que apunta al bloque de memoria asignado y limpiado.

En resumen, esta función ft_calloc asigna un bloque de memoria del tamaño especificado, 
lo inicializa a cero y devuelve un puntero a este bloque de memoria. Si la asignación de memoria falla, devuelve NULL.
*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}

int main(void)
{
	size_t count = 10;
	size_t size = sizeof(int);
	
	// Prueba 1: Verificar asignación de memoria
	int *ptr_ft = ft_calloc(count, size);
	if (ptr_ft != NULL) {
		printf("La asignación de memoria con ft_calloc fue exitosa.\n");
	} else {
		printf("La asignación de memoria con ft_calloc falló.\n");
	}

	// Prueba 2: Verificar inicialización a cero
	for (size_t i = 0; i < count; i++) {
		printf("%d ", ptr_ft[i]);
	}
	printf("\n");

	// Prueba 3: Comparar con calloc estándar
	int *ptr_std = (int *)calloc(count, size);
	// Aquí puedes comparar ptr_ft y ptr_std para verificar si son iguales

	// Liberar la memoria asignada
	free(ptr_ft);
	free(ptr_std);

	return 0;
}