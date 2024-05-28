/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:14:31 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/21 16:39:13 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		len;
	char		*dest;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = ft_calloc(sizeof(char), len);
	if (dest == 0)
		return (NULL);
	ft_strlcpy(dest, s1, len + 1);
	ft_strlcat(dest, s2, len + 1);
	return (dest);
}
