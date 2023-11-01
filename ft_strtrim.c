/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:09:58 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 16:42:53 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It takes a string and a set of characters.
// Returns the trimmed string with mem. allocation with malloc. Null if fails.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len_trim;
	char	*str_trim;

	str_trim = NULL;
	if (s1 != NULL && set != NULL)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start ++;
		while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end --;
		if (end > start)
			len_trim = end - start;
		else
			len_trim = 0;
		str_trim = (char *)malloc(len_trim + 1);
		if (str_trim != NULL)
			ft_strlcpy(str_trim, &s1[start], len_trim + 1);
	}
	return (str_trim);
}
