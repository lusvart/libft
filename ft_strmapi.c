/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:58:22 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/16 17:44:38 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			s_len;
	size_t			len_needed;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	len_needed = (s_len + 1) * sizeof(char);
	str = (char *)malloc(len_needed);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
