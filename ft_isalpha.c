/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:44:56 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:26 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
}*/
