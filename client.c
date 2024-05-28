/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzutter <fzutter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:10:44 by fzutter           #+#    #+#             */
/*   Updated: 2024/05/28 15:05:00 by fzutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <minitalk.h>
#include <stdlib.h>
#include <stdio.h>

void	send_msg(char *msg)
{
	int	i;
	int	j;
	 
	i = 0;
	j = 0;
	while (msg[j] != 0)
	{
		while (i < 8)
		{
    		if ((msg[j] >> i) & 1)
    		printf("%d", 1);
    		else
    		printf("%d", 0);
    		i++;
		}
		i = 0;
		j++;
	}
}


/*
char c = 'A';  // Par exemple, le caractère 'A'
for (int i = 0; i < 8; i++) {
    if ((c >> i) & 1) {  // Décale c de i positions et teste le bit le plus à droite
        printf("1");
    } else {
        printf("0");
    }
}
printf("\n");
*/








void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(count * size);
	if (temp == NULL)
		return (0);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i + 1] == 45 && str[i + 1] == 43)
			return (0);
		if (str[i] == 45)
			count = count * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * count);
}


int main(int argc, char **argv)
{
	int		i;
	int		pid_serv;
	char	*spid;
	char	*msg;
	
	i = 0;
/*	spid = ft_calloc(sizeof(char), (ft_strlen(argv[1]) + 1));
	while(argv[1][i] != 0)
	{
		spid[i] = argv[1][i];
		i++;
	}
	i = 0;
*/
//	printf("PID %s\n", spid);

	msg = ft_calloc(sizeof(char),(ft_strlen(argv[2]) + 1));
	while(argv[2][i] != 0)
	{
		msg[i] = argv[2][i];
		i++;
	}
	i = 0;
	printf("Message %s\n", msg);

	pid_serv = ft_atoi(argv[1]);

	printf("PID server %d\n", pid_serv);

	send_msg(msg);

	(void) argc;
}
