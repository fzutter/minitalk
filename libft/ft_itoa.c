/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:47:30 by fzutter           #+#    #+#             */
/*   Updated: 2023/11/28 15:03:14 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_check(char *dest, int n, char *min)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (n == -2147483648)
	{
		while (min[i] != '\0')
		{
			dest[i] = min[i];
			i++;
		}
		return (dest);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = ft_intlen(n);
	dest = ft_calloc(j + 1, sizeof(char));
	if (dest == 0)
		return (NULL);
	if (n == 0 || n == -2147483648)
	{
		ft_check(dest, n, "-2147483648");
		return (dest);
	}
	if (n < 0)
	{	
		n = n * -1;
		dest[0] = '-';
	}
	while (n > 0)
	{
		dest[j-- -1] = (n % 10) + '0';
		n = n / 10;
	}
	return (dest);
}
