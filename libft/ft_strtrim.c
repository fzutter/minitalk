/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 06:52:56 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/15 06:52:59 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	iset;

	iset = 0;
	if (s1[0] == '\0')
		return (ft_substr(s1, 0, ft_strlen(s1)));
	while (set[iset] != '\0')
	{
		while (s1[0] == set[iset])
			s1++;
		iset = 0;
		while (s1[0] != set[iset] && set[iset] != '\0')
			iset++;
	}
	len = ft_strlen(s1) - 1;
	iset = 0;
	while (set[iset] != '\0')
	{
		while (s1[len] == set[iset])
			len--;
		iset = 0;
		while (s1[len] != set[iset] && set[iset] != '\0')
			iset++;
	}
	return (ft_substr(s1, 0, len + 1));
}
