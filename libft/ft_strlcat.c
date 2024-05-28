/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:47:25 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/07 11:11:33 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (*dest && i < destsize)
	{
		++dest;
		++i;
	}
	y = ft_strlcpy(dest, src, destsize - i);
	return (i + y);
}
