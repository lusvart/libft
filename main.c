/*----------------------ft_isalpha-----------------------*/
/*
#include <stdio.h>
int main() 
{
    char character = 'A';
    if (ft_isalpha(character))
	{
        printf("%c es una letra.\n", character);
    }
	else
	{
        printf("%c no es una letra.\n", character);
    }
    return (0);
}
*/
/*----------------------ft_isdigit-----------------------*/
/*
#include <stdio.h>
int	main()
{
	char character = '5';
	if (ft_isdigit(character))
	{
		printf("%c es un dígito.\n", character);
	}
	else
	{
		printf("%c no es un dígito.\n", character);
	}
	return (0);
}
*/
/*----------------------ft_isalnum-----------------------*/
/*
int	main ()
{
	char c;
	
	c = 'A';
	if (ft_isalnum(c))
		printf("%c es un dígito o una letra.", c);
	else
		printf("%c no es un dígito ni una letra.", c);
	return (0);
}
*/
/*----------------------ft_isascii-----------------------*/
/*
int main()
{
	char prueba = 5;
	if (ft_isascii(prueba))
	{
		printf("%c es ASCII.\n", prueba);
	}
	else
	{
		printf("%c no es ASCII.\n", prueba);
	}
	return (0);
}
*/
/*----------------------ft_isprint-----------------------*/
/*
int	main ()
{
	char prueba = 128;
	if (ft_isprint (prueba))
		printf("is print\n", prueba);
	else
		printf("is not print\n", prueba);
	return (0);
}
*/
/*----------------------ft_strlen-----------------------*/
/*
int	main ()
{
	char	str;
	int		len;

	str = "hola mundo";
	len = ft_strlen(str);
	printf("The length of my string is: %d\n", len);
	return (0);
}
*/
/*----------------------ft_memset-----------------------*/
/*
int	main()
{
	int	i;
	char buffer[20];
	ft_memset(buffer, '3', sizeof(buffer));
	while(i < sizeof(buffer))
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
/*----------------------ft_bzero-----------------------*/
/*
int main() 
{
	int	i;
	char buffer[10];
	printf("Antes: ");
	i = 0;
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	ft_bzero(buffer, sizeof(buffer));
	printf("\nDespués: ");
	i = 0;
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	return (0);
}
*/
/*----------------------ft_memcpy-----------------------*/
/*
int	main()
{
	char source[] = "Hello, world!";
    char destination[20];
    ft_memcpy(destination, source, sizeof(source));
    printf("Cadena copiada: %s\n", destination);
    memcpy(destination, source, sizeof(source));
    printf("Cadena copiada: %s\n", destination);
    return (0);
}
*/
/*----------------------ft_memmove-----------------------*/
/*
//v1: un string 
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    printf("Original str1: %s\n", str1);
    printf("Original str2: %s\n", str2);

    memmove(str1 + 2, str2, 3);
    
    printf("Modified str1: %s\n", str1);

    return 0;
}

//v2: dos strings
int main ()
{
	char	str[] = "Hello Darkness";
	ft_memmove(str + 6, str, 6);
	printf("%s\n", str);
	return (0);
}
*/
/*----------------------ft_strlcpy-----------------------*/
/*
#include <stdio.h>
int	main()
{
	char	source[] = "let's dance";
	char	dest[5];

	ft_strlcpy(source, dest, sizeof(dest))
	printf("Copied string: %s\n", dest);
	printf("Lenght: %zu\n", dest);
	return (0);
}
*/
/*----------------------ft_strlcat-----------------------*/
/*
int main() {
    char dst[24] = "Me da igual ";
    char src[] = "tu función";

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Concatenated String: %s\n", dst);
    printf("Total Length: %zu\n", result);

    return (0);
}
*/
/*----------------------ft_toupper-----------------------*/
/*
int main()
{
    char text[] = "hola";

    printf("Original: %s\n", text);

    int i = 0;
    while (text[i] != '\0')
    {
        text[i] = ft_toupper(text[i]);
        ++i;
    }

    printf("Uppercase: %s\n", text);

    return 0;
}
*/
/*----------------------ft_tolower-----------------------*/
/*
int main()
{
    char text[] = "HOLA";

    printf("Original: %s\n", text);

    int i = 0;
    while (text[i] != '\0')
    {
        text[i] = ft_tolower(text[i]);
        ++i;
    }

    printf("Lowercase: %s\n", text);

    return 0;
}
*/
/*----------------------ft_strchr-----------------------*/
/*
int main()
{
    char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    char *d1 = strchr(src, '\0');
    char *d2 = ft_strchr(src, '\0');
    if (d1 == d2)
    {
        printf("La función ft_strchr funciona correctamente con '\\0'.\n");
    }
    else
    {
        printf("La función ft_strchr no funciona correctamente con '\\0'.\n");
    }
    return 0;
}
*/
/*----------------------ft_strrchr-----------------------*/
/*
int main()
{
    char x [] = "Hello World";
    char *resultft = ft_strrchr(x,'e');
    char *result = strrchr(x,'e');
    printf("El resultado con mi función es: %s\n",resultft);
    printf("El resultado con la función original es: %s\n",result);
    return (0);
}
*/
/*----------------------ft_strncmp-----------------------*/
/*
#include <string.h>
int main()
{
	char str1[] = "Hello,  U";
	char str2[] = "Hello,  Universeee!";
	int resultft = ft_strncmp(str1, str2, 10);
    int	result = strncmp(str1, str2, 10);
	printf("la diferencia con mi funcion ft es %i\n", resultft);
    printf("la diferencia con la función original es: %i\n", result);
    return(0);
}
*/
/*----------------------ft_memcmp-----------------------*/
/*
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hella";

    int result = ft_memcmp(str1, str2, sizeof(str1));
    if (result == 0) 
	{
        printf("Las cadenas son iguales.\n");
    } 
	else if (result < 0)
	{
        printf("La cadena 1 es menor que la cadena 2.\n");
    }
	else
	{
        printf("La cadena 1 es mayor que la cadena 2.\n");
    }
    return (0);
}
*/
/*----------------------ft_memchr-----------------------*/
/*
int main()
{
	const char *str = "Hello, World!";
	char search_char = 'W';

	const char *result = (const char *)ft_memchr(str, search_char, strlen(str));

	if (result != NULL)
	{
	printf("Se encontró '%c' en la posición %ld.\n", search_char, result - str);
	} 
	else
	{
	printf("'%c' no encontrado en la cadena.\n", search_char);
	}
	return (0);
}
*/
/*----------------------ft_strnstr-----------------------*/
/*
//#include <stdio.h>
//#include <string.h>
int main()
{
	const char *hay = "Hello WoWorld!";
	const char *ned = "World!";
	char *sol = ft_strnstr(hay, ned, 15);
	printf("%s\n", sol);
	return 0;
}
*/
/*----------------------ft_atoi-----------------------*/
/*
int main(void)
{
    char str[] = "   ---+--+1234ab567";
    int val = ft_atoi(str);
    printf ("%d ", val);
    return (0);
}
*/
/*----------------------ft_calloc-----------------------*/
/*
int main()
{
    // Intentemos asignar memoria para un array de 3 enteros
	size_t num_elements = 3;
	size_t element_size = sizeof(int);
	int *arr = (int *)ft_calloc(num_elements, element_size);
	if (!arr)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (1);
	}
	// Almacenar algunos datos en el array
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	// Imprimir los datos almacenados
	size_t i; 
	i = 0;
	while (i < num_elements)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		++i;
	}
	// Liberar la memoria
	free(arr);
	return (0);
}
*/
/*----------------------ft_strdup-----------------------*/
/*
int main()
{
    const char *original = "Hola, mundo!";
    char *copia = ft_strdup(original);

    free(copia);

    return 0;
}
*/
/*int main(void)
{
    const char *original = "¡Hola, mundo!";
    
    // Probemos ft_strlen
    size_t len = ft_strlen(original);
    printf("La longitud de la cadena es: %zu\n", len);

    // Probemos ft_strlcpy
    char buffer[20];
    size_t copied_len = ft_strlcpy(buffer, original, sizeof(buffer));
    printf("Después de copiar, la cadena es: %s\n", buffer);
    printf("Número de caracteres copiados: %zu\n", copied_len);

    // Probemos ft_strdup
    char *duplicate = ft_strdup(original);
    printf("Copia duplicada: %s\n", duplicate);

    // ¡No olvidemos liberar la memoria asignada por ft_strdup!
    free(duplicate);

    return 0;
}
*/
/*----------------------ft_substr-----------------------*/
/*
int main(void)
{
    const char *original = "Esta_es_una_cadena_de_prueba";
    unsigned int start = 5;
    size_t len = 10;
    char *result = ft_substr(original, start, len);
    if (result != NULL)
    {
        printf("Cadena original: %s\n", original);
        printf("Subcadena desde la posición %u con longitud %zu: %s\n", 
			start, len, result);

        // Liberar la memoria asignada
        free(result);
    }
    else
    {
        printf("Error al obtener la subcadena.\n");
    }
    return 0;
}
*/
/*----------------------ft_strjoin-----------------------*/
/*
int main(void)
{
    char const *s1 = "Hello, ";
    char const *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    if (result != NULL)
    {
        printf("Cadena concatenada: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error al concatenar cadenas.\n");
    }
    return (0);
}
*/
/*----------------------ft_strtrim-----------------------*/
/*
int main()
{
    // Ejemplo 1: Espacios al principio y al final
    const char *s1 = "   Hola, mundo!   ";
    const char *set1 = " ";
    char *trimmed1 = ft_strtrim(s1, set1);
    printf("Original: \"%s\"\n", s1);
    printf("Trimmed:  \"%s\"\n\n", trimmed1);
    free(trimmed1);

    // Ejemplo 2: Caracteres específicos al principio y al final
    const char *s2 = "--¡Hola, mundo!--";
    const char *set2 = "-";
    char *trimmed2 = ft_strtrim(s2, set2);
    printf("Original: \"%s\"\n", s2);
    printf("Trimmed:  \"%s\"\n\n", trimmed2);
    free(trimmed2);

    // Ejemplo 3: Cadena vacía
    const char *s3 = "";
    const char *set3 = "abc";
    char *trimmed3 = ft_strtrim(s3, set3);
    printf("Original: \"%s\"\n", s3);
    printf("Trimmed:  \"%s\"\n\n", trimmed3);
    free(trimmed3);

    return (0);
}
*/
/*----------------------ft_split-----------------------*/
/*
int main(void)
{
    // Ejemplo de cadena con delimitadores
    const char *input_string = "Hola,Mundo,Esta,Es,Una,Prueba";
    // Llamada a ft_split para dividir la cadena por comas
    char **result_array = ft_split(input_string, ',');
    // Verificación de la salida
    if (result_array)
    {
        // Iterar sobre el array resultante
        for (int i = 0; result_array[i] != NULL; i++)
        {
            printf("Palabra %d: %s\n", i + 1, result_array[i]);
        }
        // Liberar memoria del array resultante
        int j = 0;
        while (result_array[j] != NULL)
        {
            free(result_array[j]);
            j++;
        }
        free(result_array);
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }
    return (0);
}
*/
/*----------------------ft_itoa-----------------------*/
/*
int main()
{
    int casos[] = {0, 123, -456, 7890, 2147483647, -2147483648};
    size_t num_casos = sizeof(casos) / sizeof(casos[0]);
    for (size_t i = 0; i < num_casos; i++)
    {
        int n = casos[i];
        char *str = ft_itoa(n);

        if (str)
        {
            printf("Número: %d, Cadena: %s\n", n, str);
            free(str); // Liberar la memoria asignada
        }
        else
        {
            printf("Error al convertir %d a cadena\n", n);
        }
    }
    return (0);
}
*/
/*----------------------ft_strmapi-----------------------*/
/*
char f(unsigned int index, char c)
{
	if ('a' <= c && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return (c);
}

int main()
{
	char str1[] = "abcdefghijklm";
	char *str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
	return (0);
}
*/
/*----------------------ft_striteri-----------------------*/
/*
void printichar(unsigned int i, char *character) 
{
    printf("Índice: %u, Carácter: %c\n", i, *character);
}
int	main()
{
	char str[] = "hello";
	printf("Original: %s\n", str);
	ft_striteri(str, printichar);
	return (0);
}
*/
/*----------------------ft_putchar_fd-----------------------*/
/*
int main() {
    // Utilizar STDOUT_FILENO para la salida estándar en consola
    int stdout_fd = STDOUT_FILENO;

    // escribir caracteres en la salida estándar
    ft_putchar_fd('H', stdout_fd);
    ft_putchar_fd('i', stdout_fd);
    ft_putchar_fd('!', stdout_fd);

    return (0);
}
*/
/*----------------------ft_putstr_fd-----------------------*/
/*
int	main()
{
	char str[] = "hello world";
    ft_putstr_fd(str, STDOUT_FILENO);
	return (0);
}
*/
/*----------------------ft_putendl_fd-----------------------*/
/*
int  main()
{
	char	str[] = "hello";
	ft_putendl_fd(str, STDOUT_FILENO);
	return (0);
}
*/
/*----------------------ft_putnbr_fd-----------------------*/
/*
int main()
{
	ft_putnbr_fd(-2147483648, STDOUT_FILENO);
	return(0);
}
*/
/*----------------------ft_lstnew-----------------------*/
/*

*/
/*----------------------ft_lstadd_front-----------------------*/
/*

*/
/*----------------------ft_lstsize-----------------------*/
/*

*/
/*----------------------ft_lstlast-----------------------*/
/*

*/
/*----------------------ft_lstadd_back-----------------------*/
/*
int main() {
    // Crear algunos nodos para probar
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

    // Crear una lista y añadir nodos
    t_list *myList = NULL;
    ft_lstadd_back(&myList, node1);
    ft_lstadd_back(&myList, node2);
    ft_lstadd_back(&myList, node3);

    // Imprimir la lista para comprobar
    t_list *temp = myList;
    while (temp != NULL) {
        printf("%s\n", (char*)temp->content);
        temp = temp->next;
    }

    // Liberar la memoria de la lista
    ft_lstclear(&myList, free);

    return 0;
}
*/
/*----------------------ft_lstdelone-----------------------*/
/*

*/
/*----------------------ft_lstclear-----------------------*/
/*

*/
/*----------------------ft_lstiter-----------------------*/
/*

*/
/*----------------------ft_lstmap-----------------------*/
/*

*/