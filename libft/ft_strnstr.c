/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:05:46 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/13 11:05:48 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		k = i;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char *) &haystack[k]);
		i = k;
		i++;
	}
	return (0);
}
