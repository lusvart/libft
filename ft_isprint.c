/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:51:34 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 16:09:27 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
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