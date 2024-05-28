/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:17:01 by fzutter           #+#    #+#             */
/*   Updated: 2023/10/31 17:05:52 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	char		*source;

	dest = (char *) dst;
	source = (char *) src;
	if (dst > src)
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	else
		dest = ft_memcpy(dst, src, len);
	return ((void *) dest);
}
