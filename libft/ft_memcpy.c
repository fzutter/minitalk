/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:09:50 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/28 14:32:43 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (dest == (void *) 0 && src == (void *) 0)
		return (dest);
	while (i < (int) n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
