/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:35:27 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/11 14:49:55 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (s == NULL || fd < 0)
		return ;
	len = ft_strlen(s);
	write (fd, s, len);
}

/*
int	main()
{
	char str[] = "hello world";
    ft_putstr_fd(str, STDOUT_FILENO);
	return (0);
}*/