/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 07:48:13 by fzutter           #+#    #+#             */
/*   Updated: 2023/10/31 13:47:01 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void	*s, int c, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = s;
	while (i < (int) n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	s = p;
	return (s);
}
