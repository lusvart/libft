/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciafe2 <luciafe2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:48:31 by luciafe2          #+#    #+#             */
/*   Updated: 2023/10/23 16:41:04 by luciafe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It takes 2 strings as input, concatenates them.
// Returns a new string that is the concatenation of both. Null if alloc. fails.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_total;
	char	*join;

	if (s1 == NULL || s2 == NULL )
		return (NULL);
	len_s1 = 0;
	while (s1[len_s1] != '\0' )
		len_s1 ++;
	len_s2 = 0;
	while (s2[len_s2] != '\0' )
		len_s2 ++;
	len_total = len_s1 + len_s2;
	join = (char *)malloc((len_total + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, len_s1 + 1);
	ft_strlcpy(join + len_s1, s2, len_s2 + 1);
	return (join);
}
