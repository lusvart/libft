/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:50:44 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 15:55:22 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		return (0);
	}
}

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
}*/