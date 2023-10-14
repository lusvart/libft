/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:18:41 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/10 13:57:03 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main() {
    // Utilizar STDOUT_FILENO para la salida estándar en consola
    int stdout_fd = STDOUT_FILENO;

    // Usar ft_putchar_fd para escribir caracteres en la salida estándar
    ft_putchar_fd('H', stdout_fd);
    ft_putchar_fd('i', stdout_fd);
    ft_putchar_fd('!', stdout_fd);

    return (0);
}*/