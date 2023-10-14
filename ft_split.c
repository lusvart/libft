/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:28:06 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:50:16 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
			i++;
		}	
	}
	return (count);
}

static void	ft_free(int i, char *str)
{
	i = 0;
	while (str[i] != '\0')
	{
		free(str);
		i++;
	}
	free(str);
}

static char	*extract_word(char const *s, char c, size_t *start)
{
	size_t	end;
	char	*word;

	while (s[*start] && s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, *start, end - *start);
	if (!word)
		return (NULL);
	*start = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	words;
	size_t	start;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	words = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (i < words)
	{
		array[i] = extract_word(s, c, &start);
		if (!array[i])
		{
			ft_free(i, *array);
			return (NULL);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

/*int main(void)
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
    return 0;
}*/