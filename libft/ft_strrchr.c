/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:15:52 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/07 16:15:54 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;

	str = (char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((char) str[i] == (char) c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
