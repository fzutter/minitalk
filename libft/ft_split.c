/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:45:05 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/16 08:45:07 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		if (s[i] == '\0' && s[i -1] != c)
			count++;
	}
	return (count);
}

static char	*ft_fill_word(const char *dest, int first, int last)
{
	char	*w_dest;
	int		i;

	i = 0;
	w_dest = ft_calloc(sizeof(char), (last - first + 1));
	if (w_dest == 0)
		return (NULL);
	while (first < last)
	{
		w_dest[i] = dest[first];
		i++;
		first++;
	}
	w_dest[i] = 0;
	return (w_dest);
}

static void	*ft_free(char **dest, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(dest[i]);
		i++;
	}
	free(dest);
	return (NULL);
}

static void	ft_initiate(size_t *i, int *j, int *x)
{
	*i = 0;
	*j = 0;
	*x = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	i;
	int		j;
	int		x;

	ft_initiate(&i, &j, &x);
	dest = ft_calloc(sizeof(char *), ft_word_count(s, c) + 1);
	if (dest == 0)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && x < 0)
			x = i;
		else if ((s[i] == c || i == ft_strlen(s)) && x >= 0)
		{
			dest[j] = ft_fill_word(s, x, i);
			if (dest[j] == 0)
				return (ft_free(dest, j));
			x = -1;
			j++;
		}
		i++;
	}
	return (dest);
}
