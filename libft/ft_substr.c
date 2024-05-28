/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:26:37 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/21 16:37:32 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	if (!s)
		return (NULL);
	if (i < start && i < start + len)
		return (ft_strdup(""));
	if (len > i - start)
		len = i - start;
	dest = ft_calloc(sizeof(char), len + 1);
	if (dest == 0)
		return (NULL);
	while (j < len)
	{
		dest[j] = s[start + j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
