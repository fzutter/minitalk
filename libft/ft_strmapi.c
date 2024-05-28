/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:51:36 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/21 16:36:54 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	dest = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (dest == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
