/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:50:01 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 15:31:17 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
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
