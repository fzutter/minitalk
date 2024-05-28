/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:15:17 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/21 16:36:56 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) + 1;
	j = 0;
	s2 = ft_calloc(sizeof(char), i);
	if (s2 == 0)
		return (NULL);
	while (j < i)
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);
}
